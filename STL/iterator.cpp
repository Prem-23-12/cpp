# include <iostream>
# include <vector>
# include <list>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    
    vector<int>::reverse_iterator it;

    for(it = vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    cout << *vec.begin() << endl;
 
    return 0;
}