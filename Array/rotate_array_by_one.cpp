# include <iostream>
# include <vector>
# include <algorithm>
using namespace std ;

// Rotate Array by one from left

int main(){
    vector <int> nums = {1, 2, 3, 4, 5} ;
    int n = nums.size();
// 1. Repeated swaps
    for (int i = 1 ; i < n ; i++){
        swap(nums[i] , nums [i-1]);
    }


// Approach 2 
    int org = nums[0];
    for (int i = 0 ; i < n-1 ; i++){
        nums[i] = nums[i+1];
    }nums[n-1] = org ;


    for (int i : nums){
        cout << i << " " ;
    }

    return 0 ;
}