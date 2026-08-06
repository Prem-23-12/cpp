# include <bits/stdc++.h>
using namespace std ;

// Recursion 
void printno(int i, int N){

    // Base condition
    if(i == N){
        return ;
    }

    cout << i << " " ; 

    // Recursive call 
    printno(i+1, N);
}

int main(){
    printno(1, 6);
    return 0 ;
}