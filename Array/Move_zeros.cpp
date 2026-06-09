# include <iostream>
# include <vector>
using namespace std ; 

int main() {
    vector<int> nums = {0,1,0,3,12};
    int n = nums.size();
    int zero = 0;

    for (int i = 0 ; i < n-1 ; i++){
        if(nums[i] == zero){
            nums.push_back(nums[i]);
        }
    }
    for (int x : nums){
        cout << x << " ";
    }
    return 0 ;
}
