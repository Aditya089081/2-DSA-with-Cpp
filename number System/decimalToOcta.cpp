#include<iostream>
using namespace std;
int main(){
    int a = 13;
    int temp = a;
    int deci_num = 0;
    int p = 1;
    for(;temp>0;){
        int rem = temp%8;
        temp/=10;
        deci_num = rem*p+deci_num;
        p*=10;
    }
    cout<<deci_num;
}