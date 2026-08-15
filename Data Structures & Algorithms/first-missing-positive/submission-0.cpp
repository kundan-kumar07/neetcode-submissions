class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(int val:nums){
            st.insert(val);
        }
        int val=1;
        while(st.find(val)!=st.end()){
            val++;
        }
        return val;
        
    }
};