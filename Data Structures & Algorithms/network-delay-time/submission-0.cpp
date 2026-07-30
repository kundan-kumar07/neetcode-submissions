class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(vector<int> &vec:times){
            adj[vec[0]].push_back({vec[1],vec[2]});
        }
        vector<int> dist(n+1,INT_MAX);
        dist[k]=0;


        priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
> pq;
        pq.push({0,k});
        while(!pq.empty()){
            pair node=pq.top();
            pq.pop();
            for(pair p:adj[node.second]){
                if(dist[node.second]+p.second<dist[p.first]){
                    dist[p.first]=dist[node.second]+p.second;
                    pq.push({dist[p.first], p.first});
                }
            }
        }
        int minimum=INT_MIN;
        for(int i=1;i<dist.size();i++){
            if(dist[i]==INT_MAX){
                return -1;
            }
            minimum=max(dist[i],minimum);

        }
        return minimum;
        
    }
};
