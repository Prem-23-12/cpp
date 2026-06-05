#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    vector<int> nums = {2, 0, 1, 0, 2, 1, 0, 1, 2, 0, 2};
    n=nums.size();
    
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }cout << endl;
     return 0;
}