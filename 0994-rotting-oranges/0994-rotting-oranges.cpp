class Solution {

public:
    int orangesRotting(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;
        int n= grid.size();
        int m= grid[0].size();
        int count = 0;
        int total = 0;
        int minute = 0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] !=0){
                    total++;
                }
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        int dr[] ={-1,0,1,0};
        int dc[] ={0,-1,0,1};
        while(!q.empty()){
            int k = q.size();
            count += k;
            while(k--){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int nrow = row+dr[k];
                    int ncol = col+dc[k];
                    if (nrow < 0 || ncol < 0 || nrow >= n || ncol >= m || grid[nrow][ncol] != 1)
                        continue;
                    grid[nrow][ncol] = 2;
                    q.push({nrow,ncol});
                    
                }
            }
            if(!q.empty()){
                minute++;
            }
        }
        return total == count ? minute : -1;    
        
    }
};