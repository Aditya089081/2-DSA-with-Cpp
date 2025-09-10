#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    vector<int> lower(26,0);
    vector<int> upper(26,0);
    for(int i =0;i<s.size();i++){
        if(s[i]>='a'){
            lower[s[i]-'a']++;
        }else{
            upper[s[i]-'A']++;
        }
    }
    int count = 0;
    bool flag = false;
    for(int i =0;i<lower.size();i++){
        if(lower[i]%2==0){
            count+=lower[i];
        }else{
            flag=true;
            if(lower[i]-1!=0){
                count+=lower[i]-1;
            }
        }
        if(upper[i]%2==0){
            count+=upper[i];
        }else{
            flag=true;
            if(upper[i]-1!=0){
                count+=upper[i]-1;
            }
        }
    }
    if(flag){
        count++;
    }
    cout<<count;

}