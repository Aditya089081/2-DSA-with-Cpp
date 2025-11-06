#include<iostream>
using namespace std;
int main(){
    int a = 1101;
    int temp = a;
    int deci_num = 0;
    int p = 1;
    for(;temp>0;){
        int rem = temp&1;
        temp/=10;
        deci_num += rem*p;
        p*=2;
    }
    cout<<deci_num;
}