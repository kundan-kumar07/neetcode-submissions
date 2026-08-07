class Solution {
public:

    int solve(int idx, vector<int>& coins, int amount,
              vector<vector<int>>& dp)
    {
        if(amount == 0)
            return 0;

        if(amount < 0 || idx == coins.size())
            return 100001;

        // Already solved?
        if(dp[idx][amount] != -1)
            return dp[idx][amount];

      

        int take =1+ solve(idx, coins, amount - coins[idx], dp);

        

        int notTake = solve(idx + 1, coins, amount, dp);

        return dp[idx][amount] = min(take, notTake);
    }

    int coinChange(vector<int>& coins, int amount) {

        vector<vector<int>> dp(
            coins.size(),
            vector<int>(amount + 1, -1)
        );

        int ans = solve(0, coins, amount, dp);

        return ans == 100001 ? -1 : ans;
    }
};