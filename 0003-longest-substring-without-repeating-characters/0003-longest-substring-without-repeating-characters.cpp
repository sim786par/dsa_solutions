//brute force approach
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,n = s.size();
        int maxlen = 0;
        for(i=0;i<n;i++){
            int hash[256] = {0};
            for(j = i;j<n;j++){
                if(hash[s[j]] == 1) break;          //condition for already existing ch in the substring
                hash[s[j]] = 1;                    
                maxlen = max(maxlen,j-i+1);
            }
        }
        return maxlen;
    }
};