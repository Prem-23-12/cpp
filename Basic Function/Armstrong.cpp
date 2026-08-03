# include <bits/stdc++.h>
using namespace std ;

// 

int main(){
    int n = 153 ;
    int k = to_string(n).length();
    int arm = 0 ;
    int org = n ;
    while (n != 0){
        int i = n%10 ; 
        arm = arm + pow(i,k);
        n = n /10 ;
    }
    if(arm == org){
        cout << "Armstrong number";
    }else {
        cout << "Not Armstrong number";
    }

    return 0 ;
}