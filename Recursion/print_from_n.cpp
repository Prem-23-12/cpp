# include <bits/stdc++.h>
using namespace std ;

void printn(int i){

    if(i < 1){
        return ;
    }

    printn(i - 1);

    cout << i << " ";
}

int main(){

    printn(5);
    return 0 ;
}