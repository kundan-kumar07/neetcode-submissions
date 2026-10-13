class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        int productW=1;
        for(int &val:nums){
            if(val==0){
                count++;
            }
            else{
                productW*=val;

            }
            

        }

        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(count>0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(productW/nums[i]);
                }
            }
            else{
                if(count>1){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(productW);
                }
            }
        }
        return ans;


    }
};
