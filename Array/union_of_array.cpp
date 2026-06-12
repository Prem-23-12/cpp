# include <bits/stdc++.h>
using namespace std ;

vector<int> Union(vector <int> &nums1, vector <int> &nums2){
    int n = nums1.size();
    int m = nums2.size();
    
    vector<int> result;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(nums1[i] < nums2[j]){
            if(result.empty() || result.back() != nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
        }else if(nums1[i] > nums2[j]){
            if(result.empty() || result.back() != nums2[j]){
                result.push_back(nums2[j]);
            }
            j++;
        }else {
             if(result.empty() || result.back() != nums1[i]){
                result.push_back(nums1[i]);
             }
             i++, j++;
        }
    }
    while(i<n){
        if(result.empty() || result.back() != nums1[i]){
                result.push_back(nums1[i]);
        }
         i++;
    }
    while(j<m){
        if(result.empty() || result.back() != nums2[j]){
                result.push_back(nums2[j]);
        }
        j++;
    }

    return result;
}

int main(){
    vector<int> nums1 = {1,2,2,4,5};
    vector<int> nums2 = {3,3,4,5,6};
    vector<int> union_array = Union(nums1, nums2);
    
    for(int i : union_array){
        cout << i << " ";
    }
    return 0;
}