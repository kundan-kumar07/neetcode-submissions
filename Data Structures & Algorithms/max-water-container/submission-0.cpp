class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0;
        
        
        for(int i=0;i<h.size()-1;i++){
            
        int j=h.size()-1;
        
        while(i<j){
            int height=min(h[i],h[j]);
            int width=j-i;
            int area=height*width;
            ans=max(area,ans);
            j--;
            
        }
        }
        return ans;
    }
};
