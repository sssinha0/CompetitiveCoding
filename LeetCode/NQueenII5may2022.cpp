#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count=0;
    bool issafe(vector<vector<int>> &board,int row,int col,int n){
        int x=row;
        int y=col;
    while(y>=0){
        if(board[x][y]==1)
            return false;
        y--;
    }
        x=row;
        y=col;
        while(x>=0&&y>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y--;
        }
        x=row;
        y=col;
        while(x<n&&y>=0){
            if(board[x][y]==1){
                return false;
            }
            x++;
            y--;
        }
        return true;
    }
    void solve(vector<vector<int>> &board,int col,int n){
        if(col==n){
            count++;
            return;
        }
        for(int row=0;row<n;row++){
            if(issafe(board,row,col,n)){
                board[row][col]=1;
                solve(board,col+1,n);
                //backtrack
                board[row][col]=0;
                
            }
            
}
    }
    int totalNQueens(int n) {
        vector<int> temp(n,0);
          vector<vector<int>> board;
        for(int i=0;i<n;i++){
            board.push_back(temp);
        }
      
        // vector<vector<int>> ans;
        solve(board,0,n);
        return count;
    }
};