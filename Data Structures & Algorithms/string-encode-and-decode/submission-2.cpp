class Solution {
   public:
    string encode(vector<string>& strs) {
        string ans = "";
        // for (string s : strs) {
        //     string temp = "";
        //     if (s != "") {
        //         for (char c : s) {
        //             char t=c++;
        //             temp+=c
        //         }
        //     }
        // }
        for(string s:strs){
            ans+=s;
            ans+="~";
        }
        return ans;
    }

    vector<string> decode(string s) {
    vector<string> ans;
    string temp="";
    for(char c:s){
        
        if(c=='~'){
            ans.push_back(temp);
            temp="";
        }
        else{
             temp+=c;

        }
       

    }
    return ans;
    }
};
