class Solution {
public:
    void dfs(vector<vector<char>>& board,int r,int c){
        board[r][c]='*';
        int dr[]={0,0,-1,1};
        int dc[]={-1,1,0,0};

        for(int k=0;k<4;k++){
            int nr=r+dr[k];
            int nc=c+dc[k];
            if(nr>=0 && nc>=0 && nr<board.size() && nc<board[0].size() && board[nr][nc]=='O'){
                dfs(board,nr,nc);
            }
        }


    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
                dfs(board,0,i);
            }
        }

        for(int i=0;i<n;i++){
            if(board[m-1][i]=='O'){
                dfs(board,m-1,i);
            }
        }

        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                dfs(board,i,0);
            }
        }
        for(int i=0;i<m;i++){
            if(board[i][n-1]=='O'){
                dfs(board,i,n-1);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='*'){
                    board[i][j]='O';
                }
            }
        }
        
    }
};
