class Solution {
public:
    bool checkValidString(string s) {
        int balance =0;
        int count = 0;
        for(char c:s){
            if(c=='('){
                balance++;
                count++;
            }
            else if(c==')'){
                balance--;
                count--;
            }
            else{
                balance--;
                count++;
            }
            if(count<0)return false;
            balance = max(balance,0);
        }
        
        return balance ==0;
    }
};