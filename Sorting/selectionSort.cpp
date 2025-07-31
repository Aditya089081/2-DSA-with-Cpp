#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {3,4,2,3,5};
    int index;
    for(int i =0;i<n-1;i++){
        index = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Reverse way
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[n] = {3,4,2,3,5};
//     int index;
//     for(int i =n-1;i>0;i--){
//         index = i;
//         for(int j =i-1;j>=0;j--){
//             if(arr[j]<arr[index]){
//                 index = j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }