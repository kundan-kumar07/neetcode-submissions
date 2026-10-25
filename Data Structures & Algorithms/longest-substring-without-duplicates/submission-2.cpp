class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount=0;
        int j=0;
        unordered_set<int> st;
        for(int i=0;i<s.size();i++){
            
            while(st.count(s[i])){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            
            maxCount=max(maxCount,i-j+1);
        }
        return maxCount;
        
    }
};
