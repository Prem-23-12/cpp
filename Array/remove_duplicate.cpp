# include <iostream>
# include <vector>
using namespace std ;

// Remove Duplicates from array 
int main(){
    vector <int> vec = {1, 1, 2, 2, 3, 3, 3, 4};
    vector <int> result ;
    int n = vec.size() ; 

    if(!vec.empty()){
          result.push_back(vec[0]);
        for (int i = 1 ; i < n ; i++){
            if(vec[i] != vec[i-1]){
                result.push_back(vec[i]);
            }
        }
    }
    for (int i = 0 ; i < result.size() ; i++){
        cout << result[i] ; 
        }
    return 0 ;
}