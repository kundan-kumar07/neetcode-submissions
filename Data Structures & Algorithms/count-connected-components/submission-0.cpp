class Solution {
public:
    void dfs(vector<vector<int>>&adj,int node,vector<bool>&visited){
        visited[node]=true;
        for(int val:adj[node]){
            if(!visited[val]){
                dfs(adj,val,visited);
            }
        }
        
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(vector<int> vec:edges){
            adj[vec[0]].push_back(vec[1]);
            adj[vec[1]].push_back(vec[0]);

        }
        int count=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(adj,i,visited);
                count++;

            }
            
        }
        return count;

    }
};
