class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int val:nums){
            m[val]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto &it:m){
            pq.push({it.second,it.first});
        }
        while(k--){
            pair temp=pq.top();
            pq.pop();
            ans.push_back(temp.second);


        }
        return ans;
    }
};
