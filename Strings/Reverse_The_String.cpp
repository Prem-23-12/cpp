# include <bits/stdc++.h>
using namespace std ;

// Reverse the string 
string reversethestr(string p){
    int n = p.length();
    string ans = "";
    reverse(p.begin(),p.end());
    for(int i = 0 ; i < n ; i++){
        string word = ""; // length of word is zero
        while (i<n && p[i]!=' '){
            word += p[i];
            i++;
        } 
        reverse(word.begin(),word.end());
            if(word.length() > 0 ){
               ans += " " + word;
            }
        }
        return ans.substr(1);
    }


int main(){
    string p = " Myself Prem Parmar ";

    cout << reversethestr(p) << endl ;

    return 0 ;
}