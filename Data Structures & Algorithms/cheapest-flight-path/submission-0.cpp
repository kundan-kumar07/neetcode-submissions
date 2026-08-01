class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);

        for(auto e:flights){
            adj[e[0]].push_back({e[1],e[2]});

        }

        queue<pair<int,pair<int,int>>> q;
        q.push({0,{src,0}});

        vector<int> dist(n,INT_MAX);
    

        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int st=it.first;
            int node=it.second.first;
            int cost=it.second.second;
            if(st>k){
                continue;
            }

            for(auto iter:adj[node]){
                int adjNode=iter.first;
                int adjwt=iter.second;
                if(st<=k && cost+adjwt<dist[adjNode]){
                    dist[adjNode]=cost+adjwt;
                    q.push({st+1,{adjNode,adjwt+cost}});
                }
            }
        }
        if(dist[dst]==INT_MAX){
            return -1;
        }
        return dist[dst];
        
    }
};