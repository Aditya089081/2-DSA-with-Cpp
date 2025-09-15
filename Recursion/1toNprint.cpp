#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n == 0){
        return;
    }
    int p = n-1;
    print(p);
    cout<<n<<" ";
}
int main(){
    int n = 20;
    print(n);
}