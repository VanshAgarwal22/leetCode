class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rook_row , rook_col ;
        for (int i = 0 ; i < 8 ; i ++) {
            for (int j = 0 ; j < 8 ; j ++) {
                if (board[i][j] == 'R') {
                    rook_row = i ;
                    rook_col = j ;
                    break ;
                }
            }
        }  int count = 0 ;
        if (rook_row != 0) {
            for (int i = rook_row - 1 ; i >= 0 ; i --) {
                if (board[i][rook_col] == 'B') {
                    break ;
                }
                else if (board[i][rook_col] == 'p') {
                    count ++ ;
                    break ;
                }
            }
        }
        if (rook_row != 7) {
            for (int i = rook_row + 1 ; i < 8 ; i ++) {
                if (board[i][rook_col] == 'B') {
                    break ;
                }
                else if (board[i][rook_col] == 'p') {
                    count += 1 ;
                    break ;
                }
            }
        }
        if (rook_col != 0) {
            for (int i = rook_col - 1 ; i >= 0 ; i --) {
                if (board[rook_row][i] == 'B') {
                    break ;
                }
                else if (board[rook_row][i] == 'p') {
                    count ++ ;
                    break ;
                }
            }
        }
        if (rook_col != 7) {
            for (int i = rook_col + 1 ; i < 8 ; i ++) {
                if (board[rook_row][i] == 'B') {
                    break ;
                }
                else if (board[rook_row][i] == 'p') {
                    count ++ ;
                    break ;
                }
            }
        } return count ;
    }
};