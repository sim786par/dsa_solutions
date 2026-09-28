class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count=0;
        int maxcount = 0;
        for(char i : s){
            if(i =='('){
                st.push(i);
                count++;
            }
            else if(i ==')'){
                st.pop();
                count--;
            }
            maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};