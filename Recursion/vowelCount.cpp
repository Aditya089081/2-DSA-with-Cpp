#include<bits/stdc++.h>
using namespace std;
int count(string s,int n){
    int counti = 0;
    if(n<0){
        return 0;
    }
    if(s[n] == 'a'||s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u'){
        counti+=1;
    }
    return counti+count(s,--n);
}
int main(){
    string s = "voweiil";
    cout<<count(s,s.size()-1);
}