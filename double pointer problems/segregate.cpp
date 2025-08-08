#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr = {1,0,1,0,1,0,1,0};
    int n = arr.size();
   int i = 0;
        int j = arr.size()-1;
        while(i<j){
            if(arr[i]==0){
                i++;
            }else{
                if(arr[j]==0){
                swap(arr[i],arr[j]);
                i++;j--;
                }else{
                    j--;
                }
            }
        }
    

    for(int x : arr) cout << x << " ";
}