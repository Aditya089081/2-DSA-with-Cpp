#include<iostream>
#include<vector>
using namespace std;
int subset(vector<int> &arr,int start,int end,int index,int sum){
    if(index == arr.size()){
        if(sum == 0){
            return 1;
        }else{
            return 0;
        }
    }
    return subset(arr,start,end,index+1,sum)+subset(arr,start,end,index+1,sum-arr[index]);
}
int main(){
    vector<int> arr = {5,3,6,2};
    cout<<subset(arr,0,arr.size()-1,0,8);
}