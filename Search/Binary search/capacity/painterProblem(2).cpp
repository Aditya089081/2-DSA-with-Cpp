                           // The Painter's Partition Problem-II
// Difficulty: HardAccuracy: 27.52%Submissions: 149K+Points: 8
// Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.

// Determine the minimum amount of time required to paint all the boards, under the constraint that each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).

// Examples:

// Input: arr[] = [5, 10, 30, 20, 15], k = 3
// Output: 35
// Explanation: The optimal allocation of boards among 3 painters is - 
// Painter 1 → [5, 10] → time = 15
// Painter 2 → [30] → time = 30
// Painter 3 → [20, 15] → time = 35
// Job will be done when all painters finish i.e. at time = max(15, 30, 35) = 35
// Input: arr[] = [10, 20, 30, 40], k = 2
// Output: 60
// Explanation: A valid optimal partition is - 
// Painter 1 → [10, 20, 30] → time = 60
// Painter 2 → [40] → time = 40
// Job will be complete at time = max(60, 40) = 60
// Input: arr[] = [100, 200, 300, 400], k = 1
// Output: 1000
// Explanation: There is only one painter, so the painter must paint all boards sequentially. The total time taken will be the sum of all board lengths, i.e., 100 + 200 + 300 + 400 = 1000.
// Constraints:
// 1 ≤ arr.size() ≤ 105
// 1 ≤ arr[i] ≤ 104
// 1 ≤ k ≤ 105


#include<iostream>
#include<math.h>
using namespace std;
bool isPossible(int arr[],int n,int m , int maxPages){
    int count = 1;
    int pages = 0;
    for(int i =0;i<n;i++){
        pages+=arr[i];
        if(pages>maxPages){
            count++;
            pages = arr[i];
            if(count>m){
                return false;
            }
        }
    }
}
int bookAllocation(int arr[],int n,int start, int end,int m,int mid = 0,int ans = -1){

    while(start<=end){
        mid = start +(end-start)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int max(int arr[],int n){
    int min = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>min){
            min = arr[i];
        }
    }
    return min;
}
int sum (int arr[], int n){
    int sum =0;
    for(int i = 0 ;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n = 4;
    int arr[n] = {19,9,30,22,7};
    int start = 30;
    int end = 87;
    int m = 3;
    cout<<bookAllocation(arr,n,start,end,m);

}