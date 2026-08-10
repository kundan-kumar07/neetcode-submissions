#include <cstring>
class Solution {
public:
    int dp[201];
    bool solve(int idx,string s,unordered_set<string>&st){
        if(idx==s.size()){
            return true;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        for(int i=idx;i<s.size();i++){
            string temp=s.substr(idx,i-idx+1);
            if(st.count(temp)){
                if(solve(i+1,s,st)){
                    return dp[idx]=true;
                }
            }
        }
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        memset(dp,-1,sizeof(dp));
        for(string temp:wordDict){
            st.insert(temp);
        }
        return solve(0,s,st);
    }
};
