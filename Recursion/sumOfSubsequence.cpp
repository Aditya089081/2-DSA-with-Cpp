#include<bits/stdc++.h>
using namespace std;
void subsequence(vector<int> &arr,int n,int index,int sum){
    if(index == n){
        cout<<sum<<endl;
        return;
    }
    subsequence(arr,n,index+1,sum);
    subsequence(arr,n,index+1,sum+arr[index]);
}
int main(){
    vector<int> arr = {1,2,3,4};
    int n = arr.size();
    subsequence(arr,n,0,0)
}