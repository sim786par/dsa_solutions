class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string res;
        for(char c : s){
            if(c=='('){
                if(st.empty()){
                    st.push('[');
                }
                else{
                    st.push('(');
                    res+='(';
                }
            }
            else{
                if(st.top()=='('){
                    res+=')';
                }
                st.pop();
            }
        }
        return res;
    }
};