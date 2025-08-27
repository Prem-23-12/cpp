# include <iostream>
# include <string>
# include <vector>
using namespace std;

// check whether the string is palindrome or not 
bool isAlphanumeric(char ch){
        if((ch >= '0' && ch <='9')|| (tolower(ch) >='a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
 }
 bool isPalindrome(string s){
        int st=0, end = s.length()-1;

        while(st < end) {
            if(!isAlphanumeric(s[st])) {
                st++; continue;
            }
            if(!isAlphanumeric(s[end])) {
                end--; continue;
            }
            if(tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++; end--;
        }
        return true ; 
     }

// Remove the occurences in the string      

string removeoccurences(string str, string part){
    while(str.length() >0 && str.find(part) < str.length()){
        str.erase(str.find(part),part.length());
    }
    return str;
}

// check the permutation in the strings
bool isFreqsame(int freq1[], int freq2[]){
    for(int i=0 ; i<26 ; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}

bool ispermutation(string s1, string s2){
    int freq[26]={0};

    for(int i = 0 ; i<s1.length(); i++){
        freq[s1[i]-'a']++;
    }

    int windSize= s1.length();

    for(int i=0 ; i<s2.length(); i++){
        int windIdx = 0,idx=i;
        int windfreq[26]={0};

        while(windIdx < windSize && idx < s2.length()){
            windfreq[s2[idx]-'a']++;
            windIdx++, idx++;
        }
        if(isFreqsame(freq, windfreq)){// found
            return true;
        }
    }
    return false;
}

// string reversethestr(string p){
//     int n = p.length();
//     string ans = "";
//     reverse(p.begin(),p.end());
//     for(int i = 0 ; i < n ; i++){
//         string word = ""; // length of word is zero
//         while (i<n && p[i]!=' '){
//             word += p[i];
//             i++;
//         } 
//         reverse(word.begin(),word.end());
//             if(word.length() > 0 ){
//                ans += " " + word;
//             }
//         }
//         return ans.substr(1);
//     }

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
     string s = "abcfdba";
     string str ="dabcacbabcabc";
     string part ="abc";
     string s1="ab";
     string s2= "eidbaooo";
     string p = " Myself Prem Parmar ";
    //  vector <char> chars={"a","a","b","b","c","c","c"};


     cout << ispermutation(s1,s2) << endl;
      return 0;
}