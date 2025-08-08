#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int>arr,int n1,int n2){
    int sum = 0;
    for(int i =n1;i<n2;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    vector<int> arr = {3,4,-2,5,8,20,-10,8};
    int n = arr.size();
    int mid;
    int start = 0;
    int end = n-1;
    mid = start+(end-start)/2;
    while(mid>start&&mid<end){
        if(sum(arr,0,mid)==sum(arr,mid,n)){
            cout<<mid;
            break;
        }
        else if(sum(arr,0,mid)>sum(arr,mid,n)){
            mid--;
        }else{
            mid++;
        }
    }
    
}