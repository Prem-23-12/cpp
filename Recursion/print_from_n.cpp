# include <bits/stdc++.h>
using namespace std ;

void printn(int i){

    if(i < 1){
        return ;
    }

    cout << i << " ";

    printn(i-1);
}

int main(){

    printn(5);
    return 0 ;
}