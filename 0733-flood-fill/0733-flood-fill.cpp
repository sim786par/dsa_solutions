class Solution {
private:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int imgcolor){
        int n= image.size();
        int m = image[0].size();
        if(image[sr][sc] == imgcolor){
            image[sr][sc] = color;
            int dr[] = {-1,1,0,0};
            int dc[] ={0,0,-1,1};
            for(int k = 0;k<4;k++){
                int row = sr+dr[k];
                int col = sc+dc[k];
                if(row < n && row>=0 && col>=0 && col<m){
                    dfs(image,row,col,color,imgcolor);
                }
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int imgcolor = image[sr][sc];
        if(imgcolor != color){
            dfs(image, sr, sc, color, imgcolor);
            
        }
        return image;
    }
};