# include <bits/stdc++.h>
using namespace std ;

void sorted_array(vector <int> &nums1, vector <int> &nums2){
    int n = nums1.size();
    int m = nums2.size();
    int i = n - 1;
    int j = m - 1;
    int k = m + n - 1 ;
    

    while (i >= 0 && j >= 0){
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }
        else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while(j >= 0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main(){
    vector<int> nums1 = {1,2,2,4,5};
    vector<int> nums2 = {3,3,4,5,6};
    sorted_array(nums1, nums2);
    return 0;
}