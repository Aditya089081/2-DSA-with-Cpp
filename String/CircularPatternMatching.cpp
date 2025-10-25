#include<bits/stdc++.h>
using namespace std;
void LPSarray(vector<int>&lps,string s){
    int first = 0;
    int second = 1;
    while(second<s.size()){
        if(s[first]==s[second]){
            lps[second]= first+1;
            first++;
            second++;
        }
        else {
            if(first==0){
                second++;
            }
            else{
                first = lps[first-1];
            }
        }
    }
}
string rotate(string s){
    return s+s;
}
int circularMatch(string text,string pattern){
    vector<int> lps(pattern.size(),0);
    LPSarray(lps,pattern);
    string s = rotate(text);
    int first = 0; 
    int second = 0;
    while(first<s.size()){
        if(s[first] == pattern[second]){
            first++;
            second++;
        }
        else{
            if(second == 0){
                first++;
            }else{
                second = lps[second-1];
            }
        }
        if(second == pattern.size()){
            return 1;
        }
    }
    return 0;
}
int main(){
    string text = "abcd";
    string pattern = "cda";
    if(circularMatch(text,pattern)){
        cout<<"pattern found";
    }else{
        cout<<"Pattern not found";
    }
}