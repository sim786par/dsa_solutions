class Solution {
public:
    int minAddToMakeValid(string s) {
        int closecount = 0,opencount=0;
        stack<int> st;
        for(char c : s){
            if(c=='('){
                st.push(c);
            }else{
                //char top = st.top();
                if(st.empty()){
                    closecount++;
                }else{
                    st.pop();
                }
                
            }
        }
        while(!st.empty()){
            opencount++;
            st.pop();
        }
        int result = abs(opencount+closecount);
        return result;
    }
};