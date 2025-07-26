#include<iostream>
using namespace std;

// //    *
// //   *  *
// //  *    *
// // *      *
// //  *    *
// //   *  *
// //    *
int main(){
    int a = 3;
    for(int i =1;i<=a;i++){
        for(int j =1;j<=a-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=1){
            for(int j =1;j<2*i-1;j++){
            cout<<" ";
        }
            cout<<"*";
        }
        cout<<endl;
        
    }

    for(int i =1;i<a;i++){
        for(int j =1;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=a-1){

            for(int j =1;j<2*(a-i)-1;j++){
            cout<<" ";
        }
            cout<<"*";
        }
        cout<<endl;
    }

}

