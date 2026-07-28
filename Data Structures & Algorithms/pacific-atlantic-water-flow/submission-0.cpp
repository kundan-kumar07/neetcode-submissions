class Solution {
public:
    bool dfsPacific(vector<vector<int>>& heights, int r, int c,
             vector<vector<bool>>& vis) {
        if (r == 0 || c == 0)
            return true;

        vis[r][c] = true;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr>=0 && nc>=0 && nr<heights.size() && nc<heights[0].size() && !vis[nr][nc]){
                if(heights[nr][nc]<=heights[r][c]){
                    if(dfsPacific(heights,nr,nc,vis)){
                        return true;
                    }
                }
                
            }
        }
        return false;
    }

     bool dfsAtlantic(vector<vector<int>>& heights, int r, int c,
             vector<vector<bool>>& vis) {
        if (r == heights.size() - 1 || c == heights[0].size() - 1)
            return true;

        vis[r][c] = true;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr>=0 && nc>=0 && nr<heights.size() && nc<heights[0].size() && !vis[nr][nc]){
                if(heights[nr][nc]<=heights[r][c]){
                    if(dfsAtlantic(heights,nr,nc,vis)){
                        return true;
                    }
                }
                
            }
        }
        return false;
    }


    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        int m = heights.size();
        int n = heights[0].size();

        vector<vector<int>> result;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                vector<vector<bool>> vis1(m, vector<bool>(n, false));
                vector<vector<bool>> vis2(m, vector<bool>(n, false));

                bool p = dfsPacific(heights, i, j, vis1);
                bool a = dfsAtlantic(heights, i, j, vis2);

                if (p && a)
                    result.push_back({i, j});
            }
        }

        return result;
    }
};