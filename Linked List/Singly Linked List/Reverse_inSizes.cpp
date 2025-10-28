#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = nullptr;
    }
};
Node * create(int arr[],int index){
    if(arr[index] == -1) return nullptr;
        Node *temp = new Node(arr[index]);
        temp->next = create(arr,index+1);
        return temp;
}
void print(Node *Head){
    Node *alpha = Head;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->next;
    }
}
Node *Reverse(Node *Head,int k){
    Node *curr  = Head;
    Node *prev = nullptr;
    Node *fut = nullptr;
    
    int count = 0;
    while(curr && count<k){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
        count++;
    }
    if(fut){
        Head->next = Reverse(fut,k);
    }
    return prev;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,-1};
    Node* Head = create(arr,0);
    Head = Reverse(Head,3);
    print(Head);
}