// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             int temp=1;
//             for(int j=0;j<n;j++){
//                 if(i!=j){
//                     temp*=nums[j];
//                 }

//             }
//             ans.push_back(temp);

//         }
//         return ans;

//     }
// };
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums;
        }
        vector<int> left(n,1);
        vector<int> right(n,1);
        vector<int> ans(n,1);
        
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
        }
        
        for(int i=n-2;i>=0;i--){
            right[i]=nums[i+1]*right[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        return ans;



    }
};
