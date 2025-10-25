#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int start,int end){
    int pivot  = arr[end];
    int index = start;
    for(int i  = start;i<end;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[index++]);
        }
    }
    swap(arr[index],arr[end]);
    return index;
}
void quick_sort(vector<int> &arr,int start,int end){
    if(start>=end){
        return;
    }
    int pivot = partition(arr,start,end);
    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot+1,end);
}
int main(){
    vector<int> arr = {5,4,3,2,1};
    quick_sort(arr,0,arr.size()-1);
    for(int i =0;i<arr.size();i++){
        cout<<arr[i];
    }
}