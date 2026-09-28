class Solution {
public:
    string reverseParentheses(string s) {
        //stack<char>st;
        // string temp;
        // for(char i : s){
        //     if(i !=')'){
        //         st.push(i);
        //     }
        //     else{
        //         string res;
        //         while(st.top()!='('){
                    
        //             res = res+st.top();
        //             st.pop();
        //         }
        //         st.pop();
        //         for(char ch : res){
        //             st.push(ch);
        //         }
        //     }

        // }
        // while(!st.empty()){
        //     temp = st.top()+temp;
        //     st.pop();
        // }
        // return temp;

        string ans;
        stack<string>st;
        for (char ch : s) {
            if (ch == '(') {
                st.push(ans);
                ans = "";
            } else if (ch == ')') {
                reverse(ans.begin(), ans.end());
                ans = st.top() + ans;
                st.pop();
            } else {
                ans += ch;
            }
        }

        return ans;

    }
};