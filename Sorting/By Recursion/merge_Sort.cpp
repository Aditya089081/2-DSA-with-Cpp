#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int start,int mid,int end){
    vector<int> temp(end-start+1);
    int left = start;
    int right = mid+1;
    int index = 0;
    while(left<=mid&&right <=end){
        if(arr[left]<=arr[right]){
            temp[index++] = arr[left++];
        }
        else{
            temp[index++] = arr[right++];
        }
    }
    while(left<=mid){
        temp[index++] = arr[left++];
    }
    while(right <= end){
        temp[index++] = arr[right++];
    }
    index = 0;
    for(int i = start;i<=end;i++){
        arr[i] = temp[index++];
    }
}
void mergesort(vector<int> &arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid = start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);

}
int main(){
    vector<int>arr={1,4,5,6,7,2,1,6,1};
    mergesort(arr,0,arr.size()-1);
    for(int i =0;i<(signed)arr.size();i++){

        cout<<arr[i];
    }
}