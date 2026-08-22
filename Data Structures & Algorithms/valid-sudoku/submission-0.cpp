class Solution {
public:
    bool row(int i, int j, vector<vector<char>>&b, char ch){
        for(int k=0;k<9;k++){
            if(k==j) continue;
            if(b[i][k]==ch) return false;
        }
        return true;
    }
    bool col(int i, int j, vector<vector<char>>&b, char ch){
        for(int k=0;k<9;k++){
            if(k==i) continue;
            if(b[k][j]==ch) return false;
        }
        return true;
    }

    bool squ(int i, int j, vector<vector<char>>&b, char ch){
        int ii = (i / 3) * 3;
        int jj = (j / 3) * 3;

        for(int x=ii;x<ii+3;x++ ){
           for(int y=jj;y<jj+3;y++){
                if(i==x && j==y) continue;
                if(b[x][y]==ch) return false;
           }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(!row(i,j,board,board[i][j]) || !col(i,j,board,board[i][j]) || !squ(i,j,board,board[i][j])) return false;
            }
        }
        return true;
    }
};
