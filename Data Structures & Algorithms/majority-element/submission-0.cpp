class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==majority){
                count++;
            }
            else{
                if(count==0){
                    majority=nums[i];
                    count++;

                }
                else{
                    count--;

                }
                
               

            }

        }
        count=0;
        for(int x:nums){
            if(x==majority){
                count++;
            }

        }
        if(count>nums.size()){
            return majority;
        }
    }
};