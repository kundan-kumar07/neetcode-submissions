class Solution {
public:
    unordered_map<int, int> shortestPath(int n, vector<vector<int>>& edges, int src) {

        vector<vector<pair<int,int>>> adj(n);

        for(vector<int>& temp : edges) {
            int start = temp[0];
            int end = temp[1];
            int weight = temp[2];

            adj[start].push_back({weight, end});
        }

        unordered_map<int, int> res;

        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        // Min heap: {distance, node}
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        pq.push({0, src});

        while(!pq.empty()) {

            pair<int,int> p = pq.top();
            pq.pop();

            int distance = p.first;
            int node = p.second;

            for(pair<int,int> temp : adj[node]) {

                int weight = temp.first;
                int nextNode = temp.second;

                if(dist[nextNode] > distance + weight) {

                    dist[nextNode] = distance + weight;

                    pq.push({dist[nextNode], nextNode});
                }
            }
        }

        for(int i = 0; i < n; i++) {

            if(dist[i] != INT_MAX) {
                res[i] = dist[i];
            }
            else {
                res[i] = -1;
            }
        }

        return res;
    }
};