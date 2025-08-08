                                    //  time complexity - O(n)

                                    // -- we can also use binary search and get sol^n at O(nlog(n)) time complexity --
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cout<<"Array Size: ";
    cin>>n;
    int start = 0;
    int end = n-1;
    int value;

    for(int i =0;i<n;i++){
        cin>>value;
        arr.push_back(value);
    }
    int target;
    cout<<"Enter target value to find its sum: ";
    cin>>target;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else if(arr[start]+arr[end]>target){
            end--;
        }
        else{
            start++;
        }
    }

}