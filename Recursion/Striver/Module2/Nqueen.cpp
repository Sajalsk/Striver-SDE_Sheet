#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isSafe1(int row, int col, vector < string > board, int n) {
      
      int duprow = row; // Starting   for preserving the original values used in while loop
      int dupcol = col;

      while (row >= 0 && col >= 0) {            // starting from last of board
        if (board[row][col] == 'Q')   // check left diagonal
          return false;
        row--;
        col--;
      }

      row = duprow;   // After staring
      col = dupcol;
      
      while (col >= 0) {
        if (board[row][col] == 'Q')   // check left side
          return false;
        col--;
      }
  
      row = duprow;             // After starting
      col = dupcol;

      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')       // check lower right diagonal
          return false;
        row++;
        col--;
      }
      return true;
    }

  public:
    void solve(int col, vector < string > & board, vector < vector < string >> & ans, int n) {

      if (col == n) {
        ans.push_back(board);
        return;
      }

      for (int row = 0; row < n; row++) {
        if (isSafe1(row, col, board, n)) {
          board[row][col] = 'Q';

          solve(col + 1, board, ans, n);          // Next
         
          board[row][col] = '.';                  // BackTrack
        }
      }
    }

  public:
    vector < vector < string >> solveNQueens(int n) {

      vector < vector < string >> ans;
      vector < string > board(n);
      string s(n, '.');              // 4-> ....
      for (int i = 0; i < n; i++) {
        board[i] = s;                     // way of inseting .... in the board array
      }

      solve(0, board, ans, n);
      return ans;
    }
};
