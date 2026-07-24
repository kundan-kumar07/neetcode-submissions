class Solution {
public:
    bool isValid(string s){
        int count=0;
        for(char c:s){
            if(c=='('){
                count++;
            }
            else{
                count--;

            }
            if(count<0){
                return false;
            }
        }
        return count==0;
    }
    void solve(string&curr,int n,vector<string>&ans){
        if(curr.size()==2*n){
            if(isValid(curr)){
                ans.push_back(curr);
            }
            return;


        }
        curr.push_back('(');
        solve(curr,n,ans);
        curr.pop_back();
        curr.push_back(')');
        solve(curr,n,ans);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr="";
        solve(curr,n,ans);
        
        return ans;
    }
};
