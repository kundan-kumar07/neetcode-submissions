class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<pair<int,int>> pq;

        for(int val:nums){
            m[val]++;
        }
        vector<int> ans;
        for(auto &it:m){
            pq.push({it.second,it.first});
        }
        while(k>0){
            pair p=pq.top();
            pq.pop();
            ans.push_back(p.second);
            k--;

        }
        return ans;
        
    }
};
