class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxArea=INT_MIN;
        while(i<j){
            int w=j-i;
            int height;
            if(heights[i]<=heights[j]){
                height=heights[i];
                int area=w*height;
                maxArea=max(area,maxArea);
                i++;

                
            }
            else{
                height=heights[j];
                int area=w*height;
                maxArea=max(area,maxArea);


                j--;
            }
        }
        return maxArea;
        
    }
};
