class Solution {
public:

    int solve(string &s,int i,int n,vector<int>&dp){
        if(i==n){
            return 1;

        }
        if(s[i]=='0'){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int take1=solve(s,i+1,n,dp);
        int take2=0;
        if(i+1<n){
            if(s[i]=='1' || s[i]=='2' && s[i+1]<='6'){
                take2=solve(s,i+2,n,dp);
            }
        }
        return dp[i]=take1+take2;
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(101,-1);
        return solve(s,0,n,dp);
        
    }
};