# include <iostream>
  using namespace std;

  // Character printing
  int main(){ 
    int n;
    cout <<"enter n";
    cin >>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
           cout << ch << " ";
           ch=ch+1;
        }cout <<"\n";
    }
    return 0;
}