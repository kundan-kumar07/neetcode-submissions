class Solution {
   public:
    void solve(string &digits,int idx,vector<string>&ans,string &temp,unordered_map<char,string>&m){
        if(idx==digits.size()){
            ans.push_back(temp);
            return;
        }
        string curr=m[digits[idx]];
        for(int i=0;i<curr.size();i++){
            
            temp.push_back(curr[i]);
            solve(digits,idx+1,ans,temp,m);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> mp = {{'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
                                          {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        if(digits.size()==0){
            return {};
        }
        string temp="";
        vector<string> ans;
        solve(digits,0,ans,temp,mp);
        return ans;

    }
};
