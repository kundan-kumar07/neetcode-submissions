class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (int val : nums) {
            st.insert(val);
        }
        int maxCount = 0;
        for (int val : st) {
            if (st.find(val - 1) == st.end()) {
                int count = 1;
                int curr = val;
                while (st.find(curr + 1) != st.end()) {
                    count++;
                    curr = curr + 1;
                }
                maxCount = max(count, maxCount);
            }
            
        }
        return maxCount;
    }
};
