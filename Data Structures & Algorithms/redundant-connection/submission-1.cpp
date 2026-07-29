// class Solution {
// public:
//     bool dfs(vector<vector<int>>&adj,int src,int dest,vector<bool>&visited){
//         if(src==dest){
//             return true;
//         }
//         visited[src]=true;

//         for(int val:adj[src]){
//             if(!visited[val]){
//                 if(dfs(adj,val,dest,visited)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
//     vector<int> findRedundantConnection(vector<vector<int>>& edges) {
//         int n=edges.size();
//         vector<vector<int>> adj(n+1);
       
//         for(vector<int> vec:edges){
//              vector<bool> visited(n+1,false);
//             if(dfs(adj,vec[0],vec[1],visited)){
//                 return vec;
//             }
//             adj[vec[0]].push_back(vec[1]);
//             adj[vec[1]].push_back(vec[0]);

//         }
//         return {};
        
//     }
// };

class Solution {
public:
    vector<int> parent;
    int find(int x){
        if(parent[x]==x){
            return x;
        }
        return find(parent[x]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        parent.resize(n+1);
        for(int i=1;i<n+1;i++){
            parent[i]=i;
        }
        for(vector<int> vec:edges){
            int a=vec[0];
            int b=vec[1];
            if(find(a)==find(b)){
                return vec;
            }
            parent[find(b)]=find(a);
        }
        return {};
        
    }
};
