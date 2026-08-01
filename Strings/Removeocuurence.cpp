#include <bits/stdc++.h>
using namespace std ;

// Remove the occurences in the string      

string removeoccurences(string str, string part){
    while(str.length() >0 && str.find(part) < str.length()){
        str.erase(str.find(part),part.length());
    }
    return str;
}



int main (){
    string str ="dabcacbabcabc";
    string part ="abc";


    cout << removeoccurences(str, part) << endl;
    return 0 ;
}