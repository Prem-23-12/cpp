# include <bits/stdc++.h>
using namespace std ;

// Recursion 
void printno(int i, int N){

    if(i == N){
        return ;
    }

    cout << i << " " ; 

    printno(i++, N);
}

int main(){
    printno(0, 5);
    return 0 ;
}