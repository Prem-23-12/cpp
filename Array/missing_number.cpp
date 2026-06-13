# include <bits/stdc++.h>
using namespace std ;

int missing(vector <int> &nums){
    int n = nums.size();

    for (int i = 1 ; i <= n+1 ; i++){
        bool ifmiss = true;
        for (int j = 0 ; j < n ; j++){
            if(nums[j] == i){
                ifmiss = false;
                break;
            }
        }
        if(ifmiss){
            return i;
        }
    }
    return -1;
}

int main() {
    vector <int> nums = {1,2,3,4,5,7,8};
    cout << missing(nums);
    return 0;
}