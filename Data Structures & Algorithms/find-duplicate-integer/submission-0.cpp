class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int val:nums){
            if(st.find(val)!=st.end()){
                return val;
            }
            st.insert(val);
        }
        return -1;
    }
};
