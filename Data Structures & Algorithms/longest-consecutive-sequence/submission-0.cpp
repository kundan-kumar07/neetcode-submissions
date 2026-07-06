class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int maxCount=0;
        for(int val:nums){
            st.insert(val);
        }
        
        for(int val:nums){
            int next=val;
            int count=0;
            while(st.find(next)!=st.end()){
                count++;
                next++;
            }
            maxCount=max(maxCount,count);
        }
        return maxCount;
        
    }
};
