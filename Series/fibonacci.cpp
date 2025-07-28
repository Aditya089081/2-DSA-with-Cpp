#include<iostream>
using namespace std;
int fibonacci(int it,int n1=0,int n2=1){
    if(it==0){
        return n1;
    }
    return fibonacci(--it,n2,n1+n2);
}
int main(){
    cout<<fibonacci(5);

}