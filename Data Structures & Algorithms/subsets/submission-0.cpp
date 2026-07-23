class Solution {
public:
    void findSubset(vector<int>&nums,vector<vector<int>> &ans,int i,vector<int>&temp){
        if(i==nums.size()){
            ans.push_back(temp);
            return;

        }
        temp.push_back(nums[i]);
        findSubset(nums,ans,i+1,temp);
        temp.pop_back();
        findSubset(nums,ans,i+1,temp);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        findSubset(nums,ans,0,temp);
        return ans;
        
    }
};
