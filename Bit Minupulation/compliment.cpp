#include<iostream>
using namespace std;
int main(){
    int num = 13;
    int ans = 0;
    int temp = num;
    int rem;
    int p=1;
    while(temp){
        rem = (temp%2)^1;
        temp/=2;
        ans = rem*p+ans;
        p*=2;
    }
    cout<<ans;
}