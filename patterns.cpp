 # include <iostream>
  using namespace std;
  int main(){ 
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
   return 0;
}