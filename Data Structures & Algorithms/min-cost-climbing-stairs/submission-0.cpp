class Solution {
public:
    int helper(int i,int n,vector<int> &cost,vector<int> &dp){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int oneStep=cost[i]+helper(i+1,n,cost,dp);
        int twoStep=cost[i]+helper(i+2,n,cost,dp);

        return dp[i]= min(oneStep,twoStep);
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        return min(helper(0,n,cost,dp),helper(1,n,cost,dp));
        
        
    }
};