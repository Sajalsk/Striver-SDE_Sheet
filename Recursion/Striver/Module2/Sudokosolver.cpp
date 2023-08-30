#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isvalid(vector<vector<char>> &board, char c, int row, int col) {
        
        for (int i = 0; i < 9; i++) {

            if (board[row][i] == c)        return false;               // colm check
            else if (board[i][col] == c)   return false;               // row check 

            else if ( board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)     // 9*9 check
            return false;           
        }
         return true;
    }

    bool solver(vector<vector<char>> &board, int start) {

        for (int row = start; row <9;row++) {
          for (int col = 0; col < 9;col++) {

            if (board[row][col] == '.') {
              for (char c = '1'; c <= '9'; ++c) {     // checking for all the values;
                if (isvalid(board, c, row, col)) {
                   board[row][col] = c;
                   
                    if (solver(board, row))
                    return true;                      // All enteries are filled and reached at last
                    else
                    board[row][col] = '.';
                }
            }
             return false;
                }
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<char>> &board) {
        solver(board, 0);
    }
};