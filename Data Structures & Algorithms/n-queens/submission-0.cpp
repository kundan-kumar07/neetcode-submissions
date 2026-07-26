class Solution {
   public:
    vector<vector<string>> result;
    int N;
    bool isValid(int row, int col, vector<string>& board) {
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        int c=col;
        for (int i = row - 1; i >= 0; i--) {
            c--;
            if (c>= 0 && board[i][c] == 'Q') {
                return false;
            }
        }
        c=col;
        for (int i = row - 1; i >= 0; i--) {
            c++;
            if (c < N && board[i][c] == 'Q') {
                return false;
            }
        }
        return true;
    }
    void solve(vector<string>& board, int row) {
        if (row >= N) {
            result.push_back(board);
            return;
        }
        for (int col = 0; col < N; col++) {
            if (isValid(row, col, board)) {
                board[row][col] = 'Q';
                solve(board, row + 1);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        N = n;
        solve(board, 0);
        return result;
    }
};
