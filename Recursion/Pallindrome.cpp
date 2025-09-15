#include<bits/stdc++.h>
using namespace std;
int pallindrome(string s,int start,int end){
    if(start>=end){
        return 1;
    }else if(s[start]!=s[end]){
        return 0;
    }else{
        return pallindrome(s,start+1,end-1);
    }
}
int main(){
    string s = "naman";
    cout<<pallindrome(s,0,s.size()-1);
}