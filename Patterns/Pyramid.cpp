# include <bits/stdc++.h>
using namespace std;
  
 // Pyramid
   /*
   1
  121  for n = 4
 12321
1234321
*/
int main(){ 
    int n,i,j;
    cout << "enter n ";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            cout <<" ";
        }
        for(j=1;j<=i+1;j++){
            cout << j;
        }
        for(j=i;j>0;j--){
            cout << j;
        }cout << "\n";
    }

// * pattern
    int n = 5;
    for(int i = 0 ; i < n ; i++){
        for (int j = i ; j < n-1 ; j++){
            cout << " " ;
        }
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0 ;
}