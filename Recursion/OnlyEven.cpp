#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n == 2){
        cout<<n<<" ";
        return;
    }
    print(n-1);
    if(n%2==0){
        cout<<n<<" ";
    }
}
int main(){
    int n = 10;
    print(n);
}