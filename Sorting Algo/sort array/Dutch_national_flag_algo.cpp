#include <iostream>
#include <vector>
using namespace std;

// Dutch National Flag alogrithm 
int main(){
    vector<int> nums = {2, 0, 1, 0, 2, 1, 0, 1, 2, 0, 2};
    int n = nums.size();
    int mid=0,low=0,high=n-1;
    
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }

    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }cout << endl;
    return 0 ;
}