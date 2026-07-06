class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        
        string actual;
        
        for(char c:s){
            if(isalnum(c)){
                actual.push_back(toupper(c));
            }
        }
        int j=actual.size()-1;
        while(i<j){
            if(actual[i]!=actual[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};