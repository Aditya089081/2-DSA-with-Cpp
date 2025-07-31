// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[n] = {1,2,3,5,4};
//     bool swapped;
//     for(int i =0;i<n;i++){
//         swapped = false;
//         for(int j = 0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped = true;
//             }
//             // cout<<"| ";
//         }
//         if(swapped == false){
//             break;
//         }
//     }
//     cout<<endl;
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1,2,3,5,4};
    bool swapped;
    for(int i =0;i<n;i++){
        swapped = false;
        for(int j = 0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            // cout<<"| ";
        }
        if(swapped == false){
            break;
        }
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}