#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>arr = {1,2,3,1,5,6};
    for(int i =0;i<6;i++){
        arr[arr[i]-1]+=7;
    }
    // missing
    for(int i =0;i<6;i++){
        if(arr[i]/7==0){
            cout<<i+1;
        }
    }
    // repeating
    for(int i =0;i<6;i++){
        if(arr[i]/7==2){
            cout<<i+1;
        }
    }
}