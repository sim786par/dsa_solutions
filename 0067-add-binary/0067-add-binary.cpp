class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        int k = max(a.size(), b.size());
        string res(k + 1, '0');   

        int idx = k;

        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            res[idx--] = (sum & 1) + '0';   
            carry = sum >> 1;               
        }

        if (carry)
            res[idx] = '1';
        else
            return res.substr(1);  

        return res;
    }
};