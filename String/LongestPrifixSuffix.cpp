#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    string s ="abab";
    int prefix = 0;
    int suffix = 1;
    vector<int> lps(s.size(),0);
    while(suffix<s.size()){
        if(s[prefix] == s[suffix]){
            lps[suffix] = prefix+1;
            prefix++;
            suffix++;
        }else{
            if(prefix==0){
                lps[suffix] = 0;
                suffix++;
            }else{
                prefix = lps[prefix-1];
            }
        }
    }
    cout<<lps[lps.size()-1];
}