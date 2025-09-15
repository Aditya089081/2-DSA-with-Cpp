#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2){
    if(n2 == 0){
        return n1;
    }
    return gcd(n2,n1%n2);
}
int main(){
    int n  = 48;
    int m = 18;
    cout<<gcd(n,m);
}