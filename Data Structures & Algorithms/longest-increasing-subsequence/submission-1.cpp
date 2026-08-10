class Solution {
public:
    int solve(vector<int>&nums,int idx,int prev,vector<vector<int>> &dp){
        if(idx==nums.size()){
            return 0;
        }
        if(prev!=-1 && dp[idx][prev]!=-1){
            return dp[idx][prev];
        }
        int take=0;
        if(prev==-1 || nums[idx]>nums[prev]){
            take=1+solve(nums,idx+1,idx,dp);

        }
        int skip=solve(nums,idx+1,prev,dp);
        if(prev!=-1){
            return dp[idx][prev]=max(take,skip);

        }
        return max(take,skip);
        
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(nums,0,-1,dp);
    }
};
