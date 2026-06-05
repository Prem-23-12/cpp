#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

// approach 1 brute force approach
int main() {
    vector<int> nums = {2, 0, 1, 0, 2, 1, 0, 1, 2, 0, 2};
    int n = nums.size();
    
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }cout << endl;
   
    return 0;
}