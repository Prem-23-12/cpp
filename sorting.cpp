#include <iostream>
#include <vector>
using namespace std;


// Question : Sort an given array in proper manner


int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    vector<int> nums = {2, 0, 1, 0, 2, 1, 0, 1, 2, 0, 2};
    n=nums.size();

    // approach 1 brute force approach
    sort(nums.begin(),nums.end());

    //approach 2
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0)count0++;
        else if(nums[i]==1)count1++;
        else{count2++;}
    }
    int idx=0;
    for(int i=0;i<count0;i++){
        nums[idx++]=0;
    }
    for(int i=0;i<count1;i++){
        nums[idx++]=1;
    }
    for(int i=0;i<count2;i++){
        nums[idx++]=2;
    }
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }cout << endl;
     return 0;
}