# include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0 ; i < n ; i++){
        for (int j = i ; j < n-1 ; j++){
            cout << " " ;
        }cout << "*";
    }
    return 0 ;
}