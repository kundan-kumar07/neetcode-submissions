class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        
        int dr[]={1,-1,0,0};
        int dc[]={0,0,1,-1};

        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int r=p.first;
            int c=p.second;

            for(int k=0;k<4;k++){
                int nr=dr[k]+r;
                int nc=dc[k]+c;

                if(nr>=0 && nc>=0 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]==2147483647){
                    grid[nr][nc]=grid[r][c]+1;
                    q.push({nr,nc});
                }

            }
        }
    }
};
