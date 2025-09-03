#include<iostream>
#include<vector>
using namespace std;
int Max(vector<int>arr){
    int max_index = arr[0];
    for(signed int i = 0;i<arr.size();i++){
        if(arr[i]>arr[max_index]){
            max_index = i;
        }
    }
    return max_index;
}
int main(){
    vector<int> arr = {4,2,0,5,2,6,2,3};
    int n = arr.size();
    int max = Max(arr);
    int water = 0;
    int left_max = 0;
    for(int i = 0 ;i<max;i++){
        if(left_max>arr[i]){
            water+=(left_max - arr[i]);
        }
        else{
            left_max = arr[i];
        }
    }
    int right_max = 0;
    for(int i = n-1;i>max;i--){
        if(right_max>arr[i]){
            water+=(right_max-arr[i]);
        }
        else{
            right_max = arr[i];
        }
    }
    cout<<water;
    return 0;
}








                                    //    Time Complexity - O(n)
                                    //   Space Complexity - O(n);
// int main(){
//     vector<int> arr = {4,2,0,5,2,6,2,3};
//     int n = arr.size();
//     vector<int> left_max(n);
//     left_max[0] = arr[0];
//     for(int i =1;i<n;i++){
//         left_max[i]=(max(left_max[i-1],arr[i]));
//     }
    
//     vector<int> right_max(n);
//     right_max[n-1] = arr[n-1];
//     for(int i = n-2;i>=0;i++){
//         right_max[i]=(max(right_max[i+1],arr[i]));
//     }
//     int sum = 0;
//     for(int i =0;i<n;i++){
//             sum+=(min(left_max[i],right_max[i])-arr[i])>0?(min(left_max[i],right_max[i])-arr[i]):0;
//         }
//     cout<<sum;

// }