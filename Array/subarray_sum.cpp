# include <bits/stdc++.h>
using namespace std;


// Brute force approach TC O(n^3)
int subarray_sum(vector <int>& nums, int k){
    int n = nums.size();
    int maxsum = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            int cs = 0;
            for(int k = i ; k <= j ; k++){
                cs = cs + nums[i];
            }
            if(cs == k){
                maxsum = max(maxsum, j-i+1);
            }
        }
    }
    return maxsum;
}

// Optimal Approach


int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 9;
    cout << subarray_sum(nums, k);
    return 0;
}