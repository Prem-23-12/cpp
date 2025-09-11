# include <iostream>
using namespace std;
int main(){
    // Problem : We have to return the maximum sum of the subarrays 

    int maxsum=INT8_MIN;
    int cs=0;
    int arr[]={3,-4,5,4,-1};
    /*Brute force approach 
    It is not better approach because the time complexcity of the code is O(n^2).*/ 

    for(int i=0;i<5;i++){ // Kadane 's Alogrithm
        int cs=0;
        for(int j=i;j<5;j++){
            cs=cs+arr[j];
            maxsum=max(cs,maxsum);
            
        }
    }cout << maxsum;

    //  Optimize Solution of problem Using Kadane 's Alogrithm
    for(int i=0;i<5;i++){
        cs=cs+arr[i];
        maxsum=max(cs,maxsum);
        if(cs<0){
            cs=0;
        }
    }cout << maxsum << endl;

    int a[]={1,2,3,4,5};
    
    // code for print the subarrays 
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
            cout << a[k] ;
        }cout << " ";
    }cout << endl;
}   
    return 0;
}