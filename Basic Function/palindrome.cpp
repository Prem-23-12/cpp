# include <bits/stdc++.h>
using namespace std ;

int main() {
    int n = 121;
    int org = n ;
    int rev = 0 ;
    while(n > 0){
        rev = rev * 10 + n % 10 ;
        n /= 10 ;
    }
    if(rev == org){
        cout << "Palindrome" << endl ;
    }
    else{
        cout << "Not a Palindrome" << endl ;
    }
    return 0 ;
}