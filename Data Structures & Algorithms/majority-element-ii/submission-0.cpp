class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int val:nums){
            m[val]++;
        }
        int n=nums.size();
        for(pair p:m){
            if(p.second>(n/3)){
                ans.push_back(p.first);
            }
        }
        return ans;
         
    }
};