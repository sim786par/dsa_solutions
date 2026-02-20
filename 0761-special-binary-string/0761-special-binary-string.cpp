class Solution {
public:
    string makeLargestSpecial(string s) {
        int count = 0;
        int start = 0;
        vector<string> specialStrings;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') count++;
            else count--;

            if(count == 0) {
                string inside = s.substr(start + 1, i - start - 1);
                specialStrings.push_back(
                    "1" + makeLargestSpecial(inside) + "0"
                );
                start = i + 1;
            }
        }

        sort(specialStrings.rbegin(), specialStrings.rend());

        string result;
        for(auto &str : specialStrings)
            result += str;

        return result;
    }
};