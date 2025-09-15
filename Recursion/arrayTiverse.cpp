#include<bits/stdc++.h>
using namespace std;
void print(int *arr){
    if(arr[0]==1){
        cout<<arr[0];
        return;
    }
    print(arr-1);
    cout<<arr[0];
}
int main(){
    int *arr = new int[5]{1,2,3,4,5};
    print(arr+4);
    delete[] arr;
}
// #include<bits/stdc++.h>
// using namespace std;
// void print(int *arr,int n){
//     if(n==0){
//         return;
//     }
//     print(arr+1,n-1);
//     cout<<arr[0];
// }
// int main(){
//     int *arr = new int[5]{1,2,3,4,5};
//     print(arr,5);
//     delete[] arr;
// }