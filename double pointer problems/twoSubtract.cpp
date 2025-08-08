#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target = 45;
    vector<int>arr = {2,3,5,10,50,80};
    int start = 0;
    int end = 1;
    while(start<end){
        if(arr[end]-arr[start] == target){
            cout<<arr[start]<<" "<<arr[end];
            return 1;
        }
        else if(arr[end]-arr[start] <target){
            end++;
        }
        else{
            start++;
        }
    }
}