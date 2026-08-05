class Solution {
public:

    bool valid(string &s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int start=0;
        int n=s.size();
        int maxLen=1;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(valid(s,i,j)){
                    int len=j-i+1;
                    if(len>maxLen){
                        maxLen=len;
                        start=i;
                    }

                }
            

                
            }

        }
        return s.substr(start,maxLen);

    
        
    }
};