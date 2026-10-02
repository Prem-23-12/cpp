# include <bits/stdc++.h>
using namespace std ;

// leetcode question no. 
// (28) Find the Index of the First Occurrence in a String

int indexofStr(string haystack, string needle){
    int n = haystack.size();
    int m = needle.size();

    for(int i = 0 ; i <= n - m ; i++){
        int j = 0 ;

        while(j < m && haystack[i+j] == needle[j]){
            j++ ;
        }
        if( j == m){
            return i ;
        }
    }
    return -1;

}


int main(){
    string haystack = "sadbutsad";
    string needle = "sad";

    cout << indexofStr(haystack, needle);

    return 0 ;
}