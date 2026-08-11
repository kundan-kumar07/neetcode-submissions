class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        for(int val : nums) {
            st.insert(val);
        }

        int maxCount = 0;

        for(int val : nums) {

            // Only start if val is the beginning
            if(st.find(val - 1) == st.end()) {

                int count = 1;
                int next = val + 1;

                while(st.find(next) != st.end()) {
                    count++;
                    next++;
                }

                maxCount = max(maxCount, count);
            }
        }

        return maxCount;
    }
};