#include<bits/stdc++.h>
using namespace std;
int binary_search1(int arr[],int key,int start,int end){
    int mid = start + (end - start)/2;
    cout<<mid<<" ";
    if(arr[mid] == key){
        return 1;
    }else if(arr[mid]<key){
        return binary_search1(arr,key,mid+1,end);
    }else{
        return binary_search1(arr,key,start,mid-1);
    }
    if(start>end){
        return -1;
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    cout<<binary_search1(arr,2,0,6);
}
