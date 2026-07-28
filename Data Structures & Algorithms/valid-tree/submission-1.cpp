class Solution {
public:
    bool dfs(vector<vector<int>>&adj,int node,int parent,vector<bool>&visited){
        visited[node]=true;
        for(int val:adj[node]){
            if(!visited[val]){
                if(dfs(adj,val,node,visited)){
                    return true;
                }
            }
            else if(val!=parent){
                return true;
                
            }
        }
        return false;

    }
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(vector<int> vec:edges){
            adj[vec[0]].push_back(vec[1]);
            adj[vec[1]].push_back(vec[0]);

        }
        vector<bool> visited(n,false);
        if(dfs(adj,0,-1,visited)){
            return false;
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                return false;
            }
        }
        return true;



    }
};
