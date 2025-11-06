#include<iostream>
using namespace std;
int main(){
    int num = 13;
    int temp = num;
    int bi_num = 0;
    int p = 1;

        for(int i =0;temp>0;i++){
            // int rem = temp%2;
            int rem = temp&1;
            // temp = temp/2;
            temp = temp>>1;
            bi_num = rem*p+bi_num;
            p*=10;
        }
        cout<<bi_num;
        cout<<endl;
}