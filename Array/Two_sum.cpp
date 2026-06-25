# include <bits/stdc++.h>
using namespace std ;

// Brute Force approach
vector <int> Two_sum(vector<int>& nums,int target){
    int n = nums.size();

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(nums[i]+nums[j] == target){
                return {i,j};
            }
        }
    }
    return {};

}

int main (){
    vector <int> nums = {2,7,11,15};
    int target = 9 ;
    Two_sum(nums, target);
    for(int i : nums){
        cout << i ;
    }
}