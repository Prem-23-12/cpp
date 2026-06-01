# include <iostream>
  using namespace std;

  // Pyramid 
  int main(){ 
      int n,i,j;
    cout << "enter n ";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=1;j<=i+1;j++){
            cout << i+1;
        }cout <<"\n";
    }
    return 0;
  }