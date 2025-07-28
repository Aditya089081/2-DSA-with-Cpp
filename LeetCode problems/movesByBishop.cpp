#include<iostream>
using namespace std;
int main(){
    int a = 3,b=4;  //position of bishop in chess board
    int count  = 0;
    count+=min(8-a,8-b); //no. of steps moves towards downwards.
    count+=min(8-a,b-1); //no. of steps moves towards left side.
    count+=min(a-1,8-b); //no. of steps moves towards right side.
    count+=min(a-1,b-1); //no. of steps moves towards upwards.
    cout<<count;
}