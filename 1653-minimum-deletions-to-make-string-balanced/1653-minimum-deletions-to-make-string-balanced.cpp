// usng dp concept 
class Solution {
public:
    int minimumDeletions(string s) {
        int bcount=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                bcount++;
            }
            else{//if s[i]=='a' it will add a in ans+1 or bcount in comparing both for min value
                ans = min(ans+1,bcount);
            }
        }
        return ans;
    }
};