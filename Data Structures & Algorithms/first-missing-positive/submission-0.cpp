class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(int val:nums){
            if(val>0){
                st.insert(val);
            }
        }
        int smallest=1;
        while(st.count(smallest)){
            smallest++;
        }
        return smallest;
        
        
    }
};