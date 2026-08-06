# include <bits/stdc++.h>
using namespace std ;

void printn(int i){

    // Base Condition
    if(i < 1){
        return ;
    }

    cout << i << " ";

    // Recurive call
    printn(i-1);
}

int main(){

    printn(5);
    return 0 ;
}