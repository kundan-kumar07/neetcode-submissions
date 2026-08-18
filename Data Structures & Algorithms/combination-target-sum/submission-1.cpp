class Solution {
public:
    void findCombinationSum(vector<int>&nums,int i,int target,vector<int>&temp,vector<vector<int>>&ans,int sum){
        if(i==nums.size() || sum>target){
            return;
            
        }
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        findCombinationSum(nums,i,target,temp,ans,sum+nums[i]);
        temp.pop_back();
        findCombinationSum(nums,i+1,target,temp,ans,sum);


        


    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        int sum=0;
        findCombinationSum(nums,0,target,temp,ans,sum);
        return ans;
        
    }
};
