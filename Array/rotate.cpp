// #include<iostream>
// using namespace std;
// int main(){
//     int rotations = 3;
//     int a = 6;
//     int arr[] = {1,2,3,4,5,6};
//     while(rotations--){
//         int num = arr[a-1];
//         for(int i =a-1;i>0;i--){
//             arr[i] = arr[i-1];
//         }
//         arr[0] = num;
//     }
//     for(int i =0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int arr[3] = {2,1,4};
    int count = 0;
        for(int i =0;i<3-1;i++){
            if(count){
                count++;
            }
            if(arr[i]>arr[i+1]){
                count++;
            }
        }
        cout<<count;
}