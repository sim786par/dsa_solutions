class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> operation;
        int i=0;
        for(int num = 1; num <= n && i<target.size(); num++){
            operation.push_back("Push");
            if(num == target[i]){
                i++;
            }else{
                operation.push_back("Pop");
            }
        }
            
        return operation;
    }
};