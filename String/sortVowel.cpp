#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    vector<int> lower(26);
    vector<int> upper(26);
    for(int i =0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i] == 'i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
        else if(s[i]=='A'||s[i]=='E'||s[i] == 'I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
    string vowel;
    for(int i =0;i<26;i++){
        char c = 'A'+i;
        while(upper[i]>0){
            vowel+=c;
            upper[i]--;
        }
        
    }
    for(int i =0;i<26;i++){
        char c = 'a'+i;
        while(lower[i]>0){
            vowel+=c;
            lower[i]--;
        }
    }
    int first =0;
    int second = 0;
    while(second<vowel.size()){
        if(s[first]=='#'){
            s[first] = vowel[second];
            first++;
            second++;
        }
        else{
            first++;
        }
    }
    cout<<s;
}