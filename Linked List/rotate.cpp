#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        next = nullptr;
    }
};
Node *create(int arr[],int index){
    if(arr[index]==-1){
        return nullptr;
    }
    Node *temp = new Node(arr[index]);
    temp->next = create(arr,index+1);
    return temp;
}
int LLsize(Node *Head){
    Node *temp = Head;
    int count = 0;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}
int main(){
    int arr[]={1,2,3,4,5,6,-1};
    Node *Head = create(arr,0);
    int k = 2;
    int size = LLsize(Head);
}