#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    cout<<"Address of n: "<<&n<<endl;
    cout<<"Value at ptr1: "<<ptr1<<endl;
    cout<<"Address of ptr1: "<<&ptr1<<endl;
    cout<<"Value at ptr2: "<<ptr2<<endl;
    cout<<"Address of ptr2: "<<&ptr2<<endl;
    cout<<"Value at ptr3: "<<ptr3<<endl;
    cout<<"Address of ptr3: "<<&ptr3<<endl;
    cout<<"Value at ptr4: "<<ptr4<<endl;
    cout<<"Value at address of ptr4 holding: "<<****ptr4<<endl;
    
}