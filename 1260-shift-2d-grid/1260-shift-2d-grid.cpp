class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n=grid.size();
        int m = grid[0].size();
        int total = m*n;
        k= k %total;
        vector<vector<int>> ans(n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                int index = i*m+j;
                int newindex = (index+k)%total;
                int row = newindex/m;
                int col = newindex%m;
                ans[row][col] = grid[i][j];
            }
        }
        return ans;
    }
};