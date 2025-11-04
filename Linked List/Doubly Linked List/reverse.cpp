#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int value){
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};
Node *create(int arr[],int index,Node *previous){
    if(arr[index]==-1){
        return nullptr;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = previous;
    temp->next = create(arr,index+1,temp);
    return temp;
}
Node *reverse(Node *head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    Node *curr = head;
    Node *temp = nullptr;
    while(curr){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if(temp){
        head = temp->prev;
    }
    return head;
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,-1};
    Node *Head = create(arr,0,nullptr);
    Node *alpha = Head;
    while(alpha){
        cout<<alpha->data<<" ";
        alpha = alpha->next;
    }
    cout<<endl;
    Head = reverse(Head);
    alpha = Head;
    while(alpha){
        cout<<alpha->data<<" ";
        alpha = alpha->next;
    }
}