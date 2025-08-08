#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<int>arr;
    //     for(int i =0;i<arr.size();i++){
        //         cout<<arr[i]<<" ";
        //     }
    vector<int>arr;
    arr.push_back(345);
    arr.push_back(234);
    arr.push_back(231);
    // arr.pop_back();
    // arr.pop_back();
    cout<<endl;
    cout<<arr.size();
    cout<<endl;
    cout<<arr.capacity();
    cout<<endl;
    arr.push_back(231);
    cout<<arr.front()+2;
    cout<<endl;
    // cout<<*arr.end();
    cout<<endl;
    cout<<arr.size();
    cout<<endl;
    cout<<arr.capacity();
    cout<<endl;
    vector<int>v = {1,2,3,4,5,6,7};
    v.erase(v.end()-5);
    v.insert(v.begin()+2,123);
    v.at(2)=324009;
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity();
    cout<<endl;
    sort(arr.rbegin(),arr.rend(),greater<int>());
    for(auto it = arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }
    cout<<binary_search(arr.begin(),arr.end(),34);
    cout<<find(arr.begin(),arr.end(),345)-arr.begin();
}