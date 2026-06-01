# include <iostream>
  using namespace std;
  
// Hollow diamond
/*
 n = 4
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/
  int main(){
    int n,i,j;
    cout << "enter n ";
    cin >> n;

//    top view 
    for(i=0;i<n;i++){
    for(j=1;j<n-i;j++){
        cout << " ";
    }cout << "*";
    if(i!= 0){
    for(j=0;j<2*i-1;j++){
        cout << " ";
    }cout << "*";}
    cout << "\n";
    }
//    bottom view
    for(i=0;i<n-1;i++){
    for(j=0;j<i+1;j++){
        cout<< " ";
    }cout << "*";
    if(i!=2){
    for(j=0;j<2*(n-i)-5;j++){
        cout << " ";
    }cout << "*";}

    cout << "\n";
    }
    return 0;
}

