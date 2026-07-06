class Solution {
public:
    bool check(vector<vector<char>>& board,int stRow,int endRow,int stColumn,int endColumn){
        set<char> st;
        for(int i=stRow;i<=endRow;i++){
            for(int j=stColumn;j<=endColumn;j++){
                 if(board[i][j]=='.')continue;
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        //row check
        for(int i=0;i<9;i++){
            set<char> st;
            for(int j=0;j<9;j++){
                 if(board[i][j]=='.')continue;
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }

        //column check
        for(int i=0;i<9;i++){
            set<char> st;
            for(int j=0;j<9;j++){
                 if(board[j][i]=='.')continue;
                if(st.find(board[j][i])!=st.end()){
                    return false;
                }
                st.insert(board[j][i]);
            }
        }

        for(int i=0;i<9;i+=3){
            int endRow=i+2;
            for(int j=0;j<9;j+=3){
                int endColumn=j+2;
                
                if(!check(board,i,endRow,j,endColumn)){
                    return false;

                }
                
            }
        }
        return true;
        
    }
};
