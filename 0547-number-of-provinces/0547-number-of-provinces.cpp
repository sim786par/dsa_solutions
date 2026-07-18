class Solution {
private:
    void dfs(int node,vector<vector<int>>& isConnected,vector<bool>& vis){
        vis[node] = true;
        for(int i=0;i< isConnected.size();i++){
            if(isConnected[node][i] && !vis[i]){
                dfs(i,isConnected,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count =0;
        int n = isConnected.size();
        vector<bool> vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,isConnected,vis);
            }
        }
        return count;
    }
};