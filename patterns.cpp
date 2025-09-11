 # include <iostream>
  using namespace std;
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
    //   int n,i,j;
    // cout << "enter n ";
    // cin >> n;
    // for(i=0;i<n;i++){
    //     for(j=1;j<=i+1;j++){
    //         cout << i+1;
    //     }cout <<"\n";
    // }
    // int n,i,j;
    // cout << "enter n ";
    // cin >> n;
    // for(i=0;i<n;i++){
    //     for(j=1;j<=i+1;j++){
    //         cout << j;
    //     }cout << "\n";
    // }

    // Flyod 's triangle pattern

    // int n,i,j;
    // cout << "enter n ";
    // cin >> n;
    // int s=1;
    // for(i=0;i<n;i++){
    //     for(j=1;j<=i+1;j++){
    //         cout << s;
    //         s++;
    //     }cout << "\n";
    // }
// int i,n,j;
// cout << "enter n : ";
// cin >> n;
// for(i=0;i<n;i++){
//    for(j=1;j<i+1;j++){
//     cout << " "; 
//    }
//    for(j=n-i;j>0;j--){
//     cout << i+1;
//    }
//     cout << "\n";
// }

// Pyramid

// int n,i,j;
// cout << "enter n ";
// cin >> n;
// for(i=0;i<n;i++){
//     for(j=1;j<n-i;j++){
//         cout <<" ";
//     }
//     for(j=1;j<=i+1;j++){
//         cout << j;
//     }
//     for(j=i;j>0;j--){
//         cout << j;
//     }cout << "\n";
// }

// Hollow diamond
//    int n,i,j;
//    cout << "enter n ";
//    cin >> n;

// //    top view 
//    for(i=0;i<n;i++){
//     for(j=1;j<n-i;j++){
//         cout << " ";
//     }cout << "*";
//     if(i!= 0){
//     for(j=0;j<2*i-1;j++){
//         cout << " ";
//     }cout << "*";}
//     cout << "\n";
//    }
// //    bottom view
// for(i=0;i<n-1;i++){
//     for(j=0;j<i+1;j++){
//         cout<< " ";
//     }cout << "*";
//     if(i!=2){
//     for(j=0;j<2*(n-i)-5;j++){
//         cout << " ";
//     }cout << "*";}

//     cout << "\n";
// }}

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