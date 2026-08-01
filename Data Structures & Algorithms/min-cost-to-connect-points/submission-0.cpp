class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<int> visited(n,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int dist=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                adj[i].push_back({j,dist});
                adj[j].push_back({i,dist});

            }
        }

        pq.push({0,0});
        int total=0;
        while(!pq.empty()){
            pair p=pq.top();
            pq.pop();
            int wt=p.first;
            int node=p.second;
            if(visited[node]){
                continue;
            }
            visited[node]=true;
            total+=wt;
            for(pair temp:adj[node]){
                pq.push({temp.second,temp.first});
            }

        }
        return total;
        
    }
};
