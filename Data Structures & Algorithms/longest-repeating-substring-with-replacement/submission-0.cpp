class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m;
        int ans=0;
        int left=0;
        int maxFreq=0;
        for(int right=0;right<s.size();right++){
            m[s[right]]++;
            maxFreq=max(maxFreq,m[s[right]]);
            while((right-left+1)-maxFreq>k){
                m[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        
        return ans;
    }
};
