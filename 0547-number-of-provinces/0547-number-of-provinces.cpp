class Solution {
private:
    void dfs(int i, vector<int> adj[],vector<int> &vis){
        vis[i] = 1;
        for(auto it:adj[i]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n(isConnected.size());
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] == 1) adj[i].push_back(j);
            }
        }
        
        vector<int> vis(n,0);
        int provinces = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                provinces++;
                dfs(i,adj,vis);
            }
        }
        return provinces;
    }
};