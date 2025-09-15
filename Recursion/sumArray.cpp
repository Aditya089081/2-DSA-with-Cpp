#include<bits/stdc++.h>
using namespace std;
// int print(int arr[]){
//     if(arr[0] == 0){
//         return 0;
//     }
//     return arr[0]+print(arr+1);
// }
// int main(){
//     int arr[] = {83,4,3,2,4,0};
//     cout<<print(arr);
// }


int minimum(int arr[], int last, int minu = INT_MAX){
    if(arr[0] == last){
        return min(minu,arr[0]);
    }
    return minimum(arr+1,last,min(minu,arr[0]));
}
int main(){
    int arr[] = {83,5,3,2,0,4};
    cout<<minimum(arr,arr[5]);
}