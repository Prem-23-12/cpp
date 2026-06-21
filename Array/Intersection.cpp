# include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums1 = {1,2,3,4};
    vector <int> nums2 = {3,4,5,6};
    vector <int> result ;

    for(int i = 0 ; i < nums1.size() ; i++){
        for (int j = 0 ; j < nums2.size() ; j++){
            if(nums1[i] == nums2[j]){
                result.push_back(nums1[i]);
            }
        }
    }

    for (int i : result){
        cout << i << " ";
    }
    return 0;
}