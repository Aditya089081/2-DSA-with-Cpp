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
void print(Node *Head){
    Node *alpha = Head;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->next;
    }
}
Node *reverse(Node *head){
    Node *curr = head;
    Node *prev = nullptr;
    Node *fut = nullptr;
    while(curr){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    return prev;
}
int main(){
    int arr[]={9,9,9,-1};
    Node *head = create(arr,0);
    head = reverse(head);
    int carry = 1;
    Node *curr = head;
    Node *prev = nullptr;
    while(curr&&carry){
        int sum = curr->value+carry;
        curr->value = sum%10;
        prev = curr;
        carry = sum/10;
        curr = curr->next;

    }
    if(carry){
        prev->next = new Node(carry);
        carry = 0;
    }
    head = reverse(head);
    print(head);
}