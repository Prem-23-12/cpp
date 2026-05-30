# include <iostream>
using namespace std;
int main(){
    // How to use for loop
    /* for(initializtion ; condition ; increement/ Decrement){
            Block of code 
    }    */
    for(int i=0 ; i<5 ;i++){ 
        cout << i << endl;
    }
    // while loop 
    // while (condition){
    //      block of code       }
    int i = 0 ;
    while (i<5){
        cout << i << " ";
        i++ ;
    }cout << endl ;
    // do while loop -> in this always first iteration is excute after that the condition is checked
    int j = 0;
    do {
        cout << j << " " ;
        j++ ;
    }while (j<5);

    
    return 0 ;
}