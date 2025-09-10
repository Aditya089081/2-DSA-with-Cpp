#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
    string s = "AABBBCBBA";
    vector<int> count(256,0);
    int first = 0;
    int second = 0;
    int distinct = 0;
    int length = 100;
    while(first<s.size()){
        if(count[s[first]] == 0){
            distinct +=1;
        }
        count[s[first]]++;
        first++;
    }
    first = 0;
    fill(count.begin(), count.end(), 0);
    while(second<s.size()){
        if(count[s[second]]==0){
            distinct--;
        }
        count[s[second]]++;
        while(distinct==0){
            length =  min(length, second - first + 1);
            count[s[first]]--;
            if(count[s[first]]==0){
                distinct++;
            }
            first++;
        }
        second++;
    }
    cout<<length;
}