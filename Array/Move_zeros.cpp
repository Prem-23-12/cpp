# include <iostream>
# include <vector>
# include <algorithm>
using namespace std ; 

int main() {
    vector<int> nums = {0,1,0,3,12};
    int n = nums.size();
    int j = 0 ;
    int k = 2 ;

    for (int i = 1 ; i < n-1 ; i++){    
        swap(k,n-k);
    }
    for (int x : nums){
        cout << x << " ";
    }
    return 0 ;
}
