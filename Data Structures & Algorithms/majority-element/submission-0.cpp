class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int majority=nums[0];
        for(int val:nums){
            if(count==0){
                majority=val;
                count=1;

            }
            else if(val==majority){
                count++;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int val:nums){
            if(majority==val){
                count++;
            }
        }
        return count>nums.size()/2?majority:0;
        
        
    }
};