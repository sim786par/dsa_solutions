class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> reshaped_mat(r,vector<int>(c));
        int m = size(mat);
        int n = size(mat[0]);
        if(r*c != m*n){
            return mat;
        }
        for(int i=0;i<m*n;i++){
            reshaped_mat[i/c][i%c] = mat[i/n][i%n];
        }
        return reshaped_mat;
    }
};