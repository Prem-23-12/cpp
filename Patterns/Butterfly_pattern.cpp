# include <iostream>
  using namespace std;
  
// Butterfly Pattern
/* n = 4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
  int main(){
        int n,i,j ;
    cout << "enter n ";
    cin >> n;
    for(i=0;i<n;i++){
    for(j=0;j<i+1;j++){
        cout << "*";
    }  for(j=0;j<2*(n-i)-2;j++){
        cout << " ";
    }
    for(j=0;j<i+1;j++)
    {cout << "*";}
    cout << "\n";
    }
    for(i=0;i<n;i++){
    for(j=n-i;j>0;j--){
        cout << "*";
    }if(i!=0){
    for(j=2*i;j>0;j--){
        cout << " ";
    }}for(j=n-i;j>0;j--){
        cout << "*";}
    cout << "\n";
    }
  return 0;
  
}

