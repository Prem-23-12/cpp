# include <bits/stdc++.h>
using namespace std ;

int appear_once(vector <int> &nums){

    int n = nums.size();

    for (int i = 0 ; i < n ; i++){
        int num = nums[i];
        int count = 0;
        for(int j = 0 ; j < n ; j++){
            if(nums[j] == num){
                count++ ;
            }
        }
        if(count == 1){
            return num;
        }
    }
    return -1;
}

int main(){
    vector <int> nums = {4,1,2,1,2};
    cout << appear_once(nums);
    return 0 ;
}