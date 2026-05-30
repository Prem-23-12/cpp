# include <iostream>
# include <vector>
using namespace std ;

int main(){
    vector <int> arr = {1, 2, 3, 4, 5};
    int target = 4 ;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == target)
        cout << "index : " << i;
    }
    return 0 ;
}