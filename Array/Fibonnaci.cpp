# include <bits/stdc++.h>
using namespace std ;

int main(){
    int n = 20;
    if(n == 0 || n == 1){
        cout << 1 ;
    }
    int curr = 0;
    int prev = 0 , prev1 = 1 ;
    cout << prev << " " << prev1;
    while (curr <= n){
        curr = prev + prev1;
        prev = prev1;
        prev1 = curr;

        cout << curr << " " ;
    }
}