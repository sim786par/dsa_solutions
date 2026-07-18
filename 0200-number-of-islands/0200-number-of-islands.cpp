class Solution {
private:
    void bfs(int row,int col,vector<vector<int>>& visit,vector<vector<char>>& grid){
        visit[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n = grid.size();
        int m = grid[0].size(); 
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nrow=row+delRow[k];
                int ncol=col+delCol[k];
                if(nrow >=0 && nrow < n && ncol >=0 && ncol <m 
                && grid[nrow][ncol] == '1' && !visit[nrow][ncol]){
                    q.push({nrow,ncol});
                    visit[nrow][ncol] = 1;
                }
                
            }
        }
    }
public:

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> visit(row,vector<int>(col,0));
        int count = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(!visit[i][j] && grid[i][j] =='1'){
                    count++;
                    bfs(i,j,visit,grid);
                }
            }
        }
        return count;
    }
};