class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string c: tokens){
            if(c!="+" && c!="-" && c!="*" && c!="/"){
                st.push(stoi(c));
            }else{
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                if(c=="+"){
                    int val = num1+num2;
                    st.push(val);
                }
                else if(c=="-"){
                    int val = num2-num1;
                    st.push(val);
                }
                else if(c=="*"){
                    int val = num2*num1;
                    st.push(val);
                }
                else if(c=="/"){
                    int val = num2/num1;
                    st.push(val);
                }
            }
            
        }
        int res =0;
        if(!st.empty()){
            res = st.top();

        }return res;
    }
};