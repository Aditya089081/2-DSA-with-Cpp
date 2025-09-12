#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

void LPSarray(vector<int> lps,string s){
    int first = 0;
    int second = 1;
    while(second<s.size()){
        if(s[first] == s[second]){
            lps[second] = first+1;
            first++;
            second++;
        }
        else{
            if(first!=0){
                first = lps[first-1];
            }
            else{
                second++;
            }
        }
    }
}

int main(){
    string s1 = "sadbutsad";
    string s2 = "sad";
    vector<int> lps(s2.size(),0);
    int first = 0;
    int second = 0;
    LPSarray(lps,s2);
    while(first<s1.size()){
        if(s1[first]==s2[second]){
            first++;
            second++;
        }
        else{
            if(second!=0){
                second = lps[second-1];
            }
            else{
                first++;
            }
        }
        if(second == s2.size()){
            break;
        }
    }
    cout<<(first-s2.size());
    return -1;
}