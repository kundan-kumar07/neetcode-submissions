class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0;
        
        
        int i=0;
            
        int j=h.size()-1;
        
        while(i<j){
            int height=min(h[i],h[j]);
            int width=j-i;
            int area=height*width;
            ans=max(area,ans);
            if(h[j]>h[i]){
                i++;
            }
            else{
                j--;
            }
        
            
        }
        
        return ans;
    }
};
