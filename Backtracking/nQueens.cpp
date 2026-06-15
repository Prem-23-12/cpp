# include <iostream>
# include <vector>
# include <string>
using namespace std;


bool isSafe(vector<string> &board, int row, int col, int n){

    // horizontal
    for(int j=0 ; j<n ; j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    
    // vertical
    for(int j=0 ; j<n ; j++){
        if(board[j][col]=='Q'){
            return false;
        }
    }
    // left diagonally 
    for(int i=row,j=col ; i>=0 && j>=0 ; i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    // right diagonally
    for(int i=row,j=col ; i>=0 && j<n ; i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
    if(row==n){ // base case condition
        ans.push_back({board});
        return ;
    }

    for(int j=0 ; j<n ; j++){
        if(isSafe(board, row, j, n)){
            board[row][j]='Q';
            nQueens(board, row+1, n, ans);
            board[row][j]='.'; // backtracking condition
        }
    }
}


int main(){
    int n = 4 ;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    nQueens(board, 0, 4, ans);
    return 0;
}