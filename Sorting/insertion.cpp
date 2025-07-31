#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1,5,4,2,3};
    for(int i =1;i<n;i++){
        for(int j = i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// By Reverse Way
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[n] = {1,5,4,2,3};
//     for(int i =n-2;i>=0;i--){
//         for(int j = i;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }else{
//                 break;
//             }
//         }
//     }
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }