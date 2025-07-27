#include<iostream>
using namespace std;
bool reverse(int arr[],int n){
    int i =0;
    int j = n-1;
    int temp;
    while(i<j){
        temp = arr[i];
        arr[i++] = arr[j];
        arr[j--] = temp;
    }
    // return arr;
}
int main(){
    int arr[] = {1,2,3,4,5};
    reverse(arr,5);
    for(int i =0;i<sizeof(arr)/4;i++){
        cout<<arr[i];
    }
}
