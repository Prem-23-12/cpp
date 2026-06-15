# include <iostream>
# include <vector>
using namespace std;

void printsubset(vector<int> &arr, int i, vector<int> &ans){
    if(i==arr.size()){
        for(int val : ans){
            cout << val << " "; 
        }cout << endl;
        return ;
    }

    ans.push_back(arr[i]);
    printsubset(arr,i+1,ans);

    ans.pop_back();
    printsubset(arr,i+1,ans);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans1;
    printsubset(arr, 0, ans1);
    
    return 0 ;
}