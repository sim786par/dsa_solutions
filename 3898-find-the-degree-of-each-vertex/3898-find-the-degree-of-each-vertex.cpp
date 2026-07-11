class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        //t.c = o(n^2)
        // int n = matrix.size();
        // vector<int> ans(n,0);
        // for(int i=0;i<n;i++){
        //     for(int j=0;j <n;j++){
        //         if(matrix[i][j] ==1 && i != j){                   
        //             ans[i]++;
        //         }
        //     }
        // }
        // return ans;

        //t.c = o(n) using stl accumulate which return the sum of the values in the list
        int n=matrix.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        ans[i]=accumulate(matrix[i].begin(),matrix[i].end(),0);
         return ans; 
    }
};