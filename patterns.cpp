 # include <iostream>
  using namespace std;
  int main(){ 
// Butterfly pattern

//    int n,i,j ;
//    cout << "enter n ";
//    cin >> n;
//    for(i=0;i<n;i++){
//     for(j=0;j<i+1;j++){
//         cout << "*";
//     }  for(j=0;j<2*(n-i)-2;j++){
//         cout << " ";
//     }
//    for(j=0;j<i+1;j++)
//     {cout << "*";}
//     cout << "\n";
//    }
//    for(i=0;i<n;i++){
//     for(j=n-i;j>0;j--){
//         cout << "*";
//     }if(i!=0){
//     for(j=2*i;j>0;j--){
//         cout << " ";
//     }}for(j=n-i;j>0;j--){
//         cout << "*";}
//     cout << "\n";
//    }
//   return 0;
//   }
   int i,j,n;
   cout<<"enter n";
   cin>>n;

//    top loop

   for(int i=0;i<n;i++){
    for(int j=n;j>=n-i;j--){
        cout<<j;
    }if(i==0)cout <<n;
    else{
        cout <<n-1;
    }   
    for(int j=n;j>i;j--){
        if(i==1 && j==2){cout<<n-1;}
        else{cout <<n;}
    } cout <<endl;
   }
   return 0;}