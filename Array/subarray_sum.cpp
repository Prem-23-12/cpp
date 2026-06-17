# include <bits/stdc++.h>
using namespace std;

int subarray_sum(vector <int>& nums, int k){
    int n = nums.size();
    int maxsum = 0;
    for(int i = 0 ; i < n ; i++){
        int cs = 0;
        for(int j = 0 ; j < n ; j++){
            cs = cs + nums[j];
            maxsum = max(maxsum, cs);
        }
    }
    return maxsum;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 15;
    subarray_sum(nums, k);
    return 0;
}