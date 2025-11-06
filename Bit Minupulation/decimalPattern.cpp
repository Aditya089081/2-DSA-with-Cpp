#include<iostream>
using namespace std;
int main(){
    int a = 1234;
    int num = 0;
    int temp = a;
    int p = 1;
    while(temp > 0){
        int rem = temp % 10;
        temp /= 10;
        num = rem * p + num;
        p *= 10;
    }
    cout << num;
}
