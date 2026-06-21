# include <bits/stdc++.h>
using namespace std ;


// To print all unique elements in array
void appear_once(vector <int> &nums){

    int n = nums.size();

    for (int i = 0 ; i < n ; i++){
        int count = 0;
        for(int j = 0 ; j < n ; j++){
            if(nums[i] == nums[j]){
                count++ ;
            }
        }
        if(count == 1){
            cout << nums[i] << " ";
        }
    }
}

// single unique element in array 
int singleel(vector <int> &nums1){
    int n = nums1.size();
    int maxi = 0;

    for(int i = 0 ; i < n ; i++){
        maxi = maxi ^ nums1[i];  // using XOR operator 
    }
    return maxi;
}

int main(){
    vector <int> nums1 = {4,1,2,1,2};
    vector<int> nums = {1,2,2,1,2,3,4,3,5};
    appear_once(nums);
    cout << singleel(nums1);
    return 0 ;
}