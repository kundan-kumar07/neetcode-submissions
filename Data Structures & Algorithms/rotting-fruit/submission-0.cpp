class Solution {
   public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    fresh++;
                }
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }

        if(fresh==0){
            return 0;
        }
        int time = 0;
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        while (!q.empty()) {
            int siz = q.size();
            while (siz--) {
                auto p = q.front();
                int r = p.first;
                int c = p.second;

                q.pop();
                for (int k = 0; k < 4; k++) {
                    int nr = dr[k] + r;
                    int nc = dc[k] + c;
                    if (nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() &&
                        grid[nr][nc] == 1) {
                        fresh--;
                        grid[nr][nc] = 2;

                        q.push({nr, nc});
                    }
                }
            }
            if(!q.empty()){
                time++;
            }
        }
        if (fresh == 0) {
            return time;
        }
        return -1;
    }
};
