class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int count=0;
        while(i<=j){
            int sum=nums[i]+nums[j];
            if(sum<=limit){
                count++;
                i++;
                j--;
            }
            else{
                if(nums[j]<=limit){
                    count++;
                    j--;
                }
                else{
                    count++;
                    i++;
                }
            }
        }
        return count;


        
    }
};