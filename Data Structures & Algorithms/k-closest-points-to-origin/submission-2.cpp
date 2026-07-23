class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>> pq;
        for(vector<int> vec:points){
           int x=vec[0]-0;
           int y=vec[1]-0;
            double total=sqrt(pow(x,2)+pow(y,2));
           pq.push({total,vec});
        }
        while(pq.size()>k){
            pq.pop();
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            pair p=pq.top();
            ans.push_back(p.second);
            pq.pop();
        }
        
        return ans;
    }
};
