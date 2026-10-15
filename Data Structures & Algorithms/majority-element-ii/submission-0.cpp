class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int val:nums){
            m[val]++;
        }
        for(auto &p:m){
            if(p.second>nums.size()/3){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};