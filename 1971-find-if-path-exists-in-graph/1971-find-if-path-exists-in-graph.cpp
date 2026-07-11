class Solution {
// private:
//     bool dfs(int node,int des,vector<vector<int>>& adj,vector<int>& vis){
//         if(node == des) return true;
//         vis[node] = 1;
//         for(int it : adj[node]){
//             if(!vis[it]){
//                 if(dfs(it,des,adj,vis)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// public:
//     bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
//         //if(source == destination) return true;
//         vector<vector<int>> adj(n);
//         for(auto edge : edges){
//             int u = edge[0];
//             int v = edge[1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         vector<int> vis(n,0);
//         return dfs(source,destination,adj,vis);
//     }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // edges to adjList
        vector<int> adj[n];
        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n ,0);
        vis[source] = 1;
        queue<int> q;
        q.push(source);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        return vis[destination] == 1;
    }
    


    
};