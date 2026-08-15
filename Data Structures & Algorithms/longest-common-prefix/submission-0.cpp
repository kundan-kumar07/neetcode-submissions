class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string common=strs[0];

        
        
        for(int i=1;i<strs.size();i++){
            string temp="";
            for(int j=0;j<strs[i].size();j++){
                if(j<common.size() && strs[i][j]==common[j]){
                    temp.push_back(common[j]);

                }
                else{
                    break;
                }
            }
            if(temp.size()<common.size()){
                common=temp;
            }
        }
        return common;

            
        
    }
};