#include<iostream>
using namespace std;

// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
int main(){
    int a= 4;
    for(int i =1;i<=a;i++){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        for(int j = 1;j<=2*(a-i);j++){
            cout<<" ";
        }
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i =1;i<=a;i++){
        for(int j =1;j<=a-i;j++){
            cout<<"*";
        }
        for(int j =1;j<=2*(i);j++){
            cout<<" ";
        }
        for(int j =1;j<=a-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}