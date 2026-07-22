class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int row = 0, col = m-1;
        while(row < n && col > -1){
            int current = matrix[row][col];
            if(target == current) return true;
            else if(target < current) col--;
            else row++;
        }
        return false;
    }
};