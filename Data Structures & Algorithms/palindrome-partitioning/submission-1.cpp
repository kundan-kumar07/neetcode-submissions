class Solution {
   public:

   bool validP(int l,int r,string &s){
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
   }
    void solve(vector<vector<string>>& ans, vector<string>& curr, string &s, int idx) {
        if (idx == s.size()) {
            ans.push_back(curr);
            return;
        }
        for (int i = idx; i < s.size(); i++) {
            if (validP(idx, i, s)) {
                curr.push_back(s.substr(idx, i - idx + 1));
                solve(ans, curr, s, i+ 1);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;

        vector<string> curr;
        solve(ans, curr, s, 0);
        return ans;
    }
};
