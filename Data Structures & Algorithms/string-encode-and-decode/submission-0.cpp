class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string s:strs){
            ans+=to_string(s.size())+"#"+s;

        }
        return ans;
    

    }

    vector<string> decode(string s) {
    
    int i=0;
    vector<string> ans;
    while(i<s.size()){
        int j=i;
        
        while(s[j]!='#'){
            j++;
        }
        int len=stoi(s.substr(i,j-i));
        string temp=s.substr(j+1,len);
        ans.push_back(temp);
        i=j+len+1;


    }
    return ans;
        
        

    }
};
