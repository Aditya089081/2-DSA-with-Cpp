#include<iostream>
#include<string.h>
#include<vector>

using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    string temp;
    vector<string> ans(10);
    for(int i =0;i<s.size();i++){
        if(s[i]==' '){
            int index = temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[index] = temp;
            temp.clear();
        }else{

            temp += s[i];
        }
    }
    if (!temp.empty()) {
        int index = temp.back() - '0';
        temp.pop_back();
        ans[index] = temp;
    }
    for(int i =0;i<ans.size();i++){
        if(!ans[i].empty())
        cout<<ans[i]<<" ";
    }
}