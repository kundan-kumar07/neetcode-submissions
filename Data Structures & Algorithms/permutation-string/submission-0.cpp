class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> m;
        unordered_map<char,int> copy;
        for(char c:s1){
            m[c]++;
        }

        
        
        int n=s1.size();
        for(int i=0;i<s2.size();i++){
            if(i+n<=s2.size()){
                copy=m;
                bool check=true;
                for(int j=i;j<i+n;j++){
                    if(copy.find(s2[j])!=copy.end()){
                        copy[s2[j]]--;
                        if(copy[s2[j]]==0){
                            copy.erase(s2[j]);
                        }
                        

                        
                        
                    }
                    else{
                        check=false;
                        break;
                    }
                    
                    
                }
                if(check){
                    return true;
                }

            }
            
        }
        return false;
        
    }
};
