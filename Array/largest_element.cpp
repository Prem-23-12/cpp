# include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums = {1,2,3,7,5,8,10};
    int n = nums.size();
    int max = INT_MIN;
    
    for (int i = 0 ; i < n ; i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    cout << max;
    return 0;
}