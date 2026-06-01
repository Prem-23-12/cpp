# include <iostream>
  using namespace std;
  
// Reverse Pyramid
int main(){ 
    int i,n,j;
    cout << "enter n : ";
    cin >> n;
    for(i=0;i<n;i++){
    for(j=1;j<i+1;j++){
        cout << " "; 
    }
    for(j=n-i;j>0;j--){
        cout << i+1;
    }
        cout << "\n";
    }
  }