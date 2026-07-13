class Solution {
public:
    int findMin(vector<int> &nums) {
        int minVal=INT_MAX;
        for(int val:nums){
            minVal=min(minVal,val);
        }
        return minVal;
        
    }
};
