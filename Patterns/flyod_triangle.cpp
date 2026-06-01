# include <iostream>
  using namespace std;

 // Flyod 's triangle pattern
 
    int main(){
    int n,i,j;
    cout << "enter n ";
    cin >> n;
    int s=1;
    for(i=0;i<n;i++){
        for(j=1;j<=i+1;j++){
            cout << s;
            s++;
        }cout << "\n";
    }
  }