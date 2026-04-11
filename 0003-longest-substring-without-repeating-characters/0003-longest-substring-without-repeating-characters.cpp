//brute force approach tc= o(n^2)
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int i,j,n = s.size();
//         int maxlen = 0;
//         for(i=0;i<n;i++){
//             int hash[256] = {0};
//             for(j = i;j<n;j++){
//                 if(hash[s[j]] == 1) break;          //condition for already existing ch in the substring
//                 hash[s[j]] = 1;                    
//                 maxlen = max(maxlen,j-i+1);
//             }
//         }
//         return maxlen;
//     }
// };

// optimal solution using sliding window tc=o(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(256,-1);
        int l = 0,r=0,maxlen = 0;
        while(r<s.size()){
            if(hash[s[r]] >= l){                //checking if already present element lies in range or not of l and r
                l= hash[s[r]] +1;               // assigning the l to existing element+1 index so the substring starts from there
            }
            maxlen = max(maxlen,r-l+1);
            hash[s[r]] = r;                    //assigning the elements to the r
            r++;
        }
        return maxlen;
    }
};