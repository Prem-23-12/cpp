# include <iostream>
# include <vector>
# include <string>
using namespace std;

void printsubset(vector<int> &arr, int i, vector<int> &ans){
    if(i==arr.size()){
        for(int val : ans){
            cout << val << " "; 
        }cout << endl;
        return ;
    }

    ans.push_back(arr[i]);
    printsubset(arr,i+1,ans);

    ans.pop_back();
    printsubset(arr,i+1,ans);
}

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

// sudoko solver 

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans1;
    int n = 4 ;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    nQueens(board, 0, 4, ans);
    return 0;
}