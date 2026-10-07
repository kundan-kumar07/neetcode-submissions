class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int> temp;
       int count=0;
       for(int t:nums){
        if(t!=val){
            temp.push_back(t);
        }
        
       }
       
       
       nums=temp;
       return nums.size();
    
       

      
        
    }
};