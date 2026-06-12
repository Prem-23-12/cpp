# include <iostream>
# include <vector>
# include <algorithm>
using namespace std ; 
// brute force approach -> make a another array and store non zero values in it and after that copy the array in the actual array


// another approach
void Move_zeros(vector<int> &nums){
    int n = nums.size();
    int j = -1;
     for (int i = 0 ; i < n; i++){
        if(nums[i] == 0){
            j = i ;
            break;
        }
     }
     if(j == -1) return ;

     for(int i = j+1 ; i < n ; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++ ;
            }
     }

}

int main() {
    vector<int> nums = {0,1,0,3,12};
    Move_zeros(nums);
    for (int x : nums){
        cout << x << " ";
    }
    return 0 ;
}
