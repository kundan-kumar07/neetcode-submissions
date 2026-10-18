class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> st;
        for(int val:nums){
            st.insert(val);
        }
        vector<int> temp;
        for(int val:st){
            temp.push_back(val);
        }
        nums=temp;
        sort(nums.begin(),nums.end());
        return temp.size();

    }
};