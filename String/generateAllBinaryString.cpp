#include<bits/stdc++.h>
using namespace std;
void substring(string curr,int n,vector<string>&str){
    if(n==curr.length()){
        str.push_back(curr);
        return;
    }
    substring(curr+"0",n,str);
    if(curr.back()!='1'||curr.empty()){
        substring(curr+"1",n,str);
    }

}
int main(){
    vector<string> str;
    substring("",3,str);
    for(string s:str){
        cout<<s<<" ";
    }
}