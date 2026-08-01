# include <iostream>
# include <string>
# include <vector>
using namespace std;

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

int compression(vector<char> chars){
    int n = chars.size();
    int idx=0;
    for(int i = 0;i<n;i++){
        char ch = chars[i];
        int count = 0;

        while(i<n && chars[i]==ch){
            count++, i++;
        }
        if(count == 1){
            chars[idx++]=ch;
        }else {
            chars[idx++]=ch;
            string str = to_string(count);
            for(char dig : str){
                chars[idx++]=dig;
            }
        }i--;

    }
    chars.resize(idx);
    return idx;
}

int main(){
     string s = "abcfcba";
     string str ="dabcacbabcabc";
     string part ="abc";
     string s1="ab";
     string s2= "eidbaooo";
     string p = " Myself Prem Parmar ";
    //  vector <char> chars={"a","a","b","b","c","c","c"};

      return 0;
}