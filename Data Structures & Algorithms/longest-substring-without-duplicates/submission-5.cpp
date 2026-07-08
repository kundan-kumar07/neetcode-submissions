class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int left=0;
        int maxLength=0;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])!=m.end() && left <=m[s[i]]){
                left=m[s[i]]+1;
                

            }
            
                m[s[i]]=i;
            
            maxLength=max(maxLength,i-left+1);

        }
        return maxLength;
        
    }
};
