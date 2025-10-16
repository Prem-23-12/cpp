#include <iostream>
#include <vector>
using namespace std;

// Bubble sort
void bubblesort(int arr[], int n) // TC O(n^2)
{
    for (int i = 0; i <= n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
}

// Selection sort
void selectionsort(int arr[], int n) // TC O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        int SI = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[SI])
            {
                SI = j;
            }
        }
        swap(arr[i], arr[SI]);
    }
}

// Insertion sort
void insertionsort(int arr[], int n) // TC O(n^2)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i], prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Question : Sort an given array in proper manner


int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    vector<int> nums = {2, 0, 1, 0, 2, 1, 0, 1, 2, 0, 2};
    n=nums.size();

    // approach 1
    // sort(nums.begin(),nums.end());

    // approach 2
    // int count0=0,count1=0,count2=0;
    // for(int i=0;i<n;i++){
    //     if(nums[i]==0)count0++;
    //     else if(nums[i]==1)count1++;
    //     else{count2++;}
    // }
    // int idx=0;
    // for(int i=0;i<count0;i++){
    //     nums[idx++]=0;
    // }
    // for(int i=0;i<count1;i++){
    //     nums[idx++]=1;
    // }
    // for(int i=0;i<count2;i++){
    //     nums[idx++]=2;
    // }

    // Dutch National Flag alogrithm 
    int mid=0,low=0,high=n-1;
    
    // while(mid<=high){
    //     if(nums[mid]==0){
    //         swap(nums[mid],nums[low]);
    //         mid++;
    //         low++;
    //     }else if(nums[mid]==1){
    //         mid++;
    //     }else{
    //         swap(nums[mid],nums[high]);
    //         high--;
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     cout << nums[i] << " ";
    // }cout << endl;
    cout << printarray(arr, n);
     return 0;
}