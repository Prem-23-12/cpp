# include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int one = 1;
    for(int i = 0 ; i < n ; i++){
        if(i%2 == 0)
            one = 1;
        else{
            one = 0;
        }
        for(int j = 0 ; j <= i; j++){
            cout << one ;
            one = 1 - one ;
        }
        cout << endl;
    }
    return 0 ;
}