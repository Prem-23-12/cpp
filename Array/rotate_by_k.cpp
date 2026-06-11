# include <iostream>
# include <vector>
# include <algorithm>
using namespace std ;


void reverse_array(vector<int> &nums, int st, int end){
    while(st < end){
        swap(nums[st],nums[end]);
        st++,end--;
    }
}

vector<int> rotate_by_k(vector<int> &nums, int k, string dir){
    int n = nums.size();
    
    k = k%n;
    
    if(n == 0 || k == 0 ){
        return nums;
    }
    if (dir == "right"){
        reverse_array(nums, 0, n-1);

        reverse_array(nums, 0, k-1);

        reverse_array(nums, k, n-1);
    }
    else if(dir == "left"){
        reverse_array(nums, 0, k-1);

        reverse_array(nums, k, n-1);

        reverse_array(nums, 0, n-1);
    }
    return nums;
}


int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    rotate_by_k(nums,2,"right");
    
    for(int i : nums){
        cout << i << " ";
    }

    return 0 ;
}