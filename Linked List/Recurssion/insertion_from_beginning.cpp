#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        next = nullptr;
    }
};
Node* insert(int arr[],int index,int size,Node *prev){
    if(index==size){
        return prev;
    }
    Node *temp = new Node(arr[index]);
    temp->next = prev;
    return insert(arr,index+1,size,temp);
};
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    Node *Head = insert(arr,0,size,nullptr);
    Node* alpha = Head;
    while (alpha != nullptr) {
        cout << alpha->value << " ";
        alpha = alpha->next;
    }

    return 0;
}