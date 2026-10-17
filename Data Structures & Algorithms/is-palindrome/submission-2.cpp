class Solution {
public:
    bool isPalindrome(string s) {
        
        int i=0;
        
        string final;
        for(char c:s){
            if(isalnum(c)){
                final.push_back(tolower(c));
            }
        }
        int j=final.size()-1;
        while(i<j){
            if(final[i]!=final[j]){
                return false;

            }
            i++;
            j--;


        }
        return true;
    }
};
