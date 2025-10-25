#include<bits/stdc++.h>
using namespace std;
int perfect_sum(vector<int> &arr,int index,int sum){
    if(sum == 0){
            return 1;
        }
    if(index == arr.size()|| sum<0){
        
            return 0;
        
    }
    return perfect_sum(arr,index+1,sum-arr[index]) + perfect_sum(arr,index,sum-arr[index]);
}
int main(){
    vector<int> arr = {2,3,1};
    int sum  = 6;
    cout<<perfect_sum(arr,0,sum);
}