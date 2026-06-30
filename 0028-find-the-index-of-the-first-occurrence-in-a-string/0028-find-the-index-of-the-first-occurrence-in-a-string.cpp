class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        if(m > n) return -1;

        long long base = 31;
        long long mod = 1e9+7;

        long long patternHash = 0;
        long long windowHash = 0;
        long long power = 1;

        for(int i=0;i<m-1;i++)
            power = (power*base)%mod;

        for(int i=0;i<m;i++){
            patternHash =(patternHash*base + needle[i])%mod;

            windowHash =(windowHash*base + haystack[i])%mod;
        }

        for(int i=0;i<=n-m;i++){

            if(patternHash == windowHash){

                bool same = true;

                for(int j=0;j<m;j++){
                    if(haystack[i+j] != needle[j]){
                        same = false;
                        break;
                    }
                }

                if(same) return i;
            }

            if(i < n-m){

                windowHash =(windowHash - haystack[i]*power%mod + mod)%mod;

                windowHash =(windowHash*base + haystack[i+m])%mod;
            }
        }

        return -1;
    }
};