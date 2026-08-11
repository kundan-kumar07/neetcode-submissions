class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count=1;
        
        int maxCount=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(i+1<nums.size() && nums[i]+1==nums[i+1]){
                count++;
            }
            else if(i+1<nums.size() && nums[i]==nums[i+1]){
                continue;
            }
            else{
                count=1;
            }
            maxCount=max(count,maxCount);

        }
        return maxCount;
        
    }
};
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         unordered_set<int> st;

//         for(int val : nums) {
//             st.insert(val);
//         }

//         int maxCount = 0;

//         for(int val : nums) {

//             // Only start if val is the beginning
//             if(st.find(val - 1) == st.end()) {

//                 int count = 1;
//                 int next = val + 1;

//                 while(st.find(next) != st.end()) {
//                     count++;
//                     next++;
//                 }

//                 maxCount = max(maxCount, count);
//             }
//         }

//         return maxCount;
//     }
// };
