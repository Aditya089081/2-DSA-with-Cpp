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
Node *delete_from_beginning(Node *Head){
    Node *temp = Head;
    Head = Head->next;
    delete temp;
    return Head;
}
void delete_from_end(Node *Head){
    Node *prev = nullptr;
    Node *curr = Head;
    while(curr->next!=nullptr){
        prev = curr;
        curr = curr->next;
    }
    prev->next = nullptr;
    delete curr;
}
void deletion_from_particular_location(Node *head,int k){
    Node *prev = nullptr;
    Node *curr = head;
    while(k--){
        prev = curr;
        curr = curr->next;
    }
    // Node *fut = curr->next
    prev->next = curr->next;
    delete curr;
}
Node *reverse(Node *Head){
    if(!Head||Head->next == nullptr){
        return Head;
    }
    Node *prev = nullptr;
    Node *curr = Head;
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
    int arr[]={1,2,3,4,5,-1};
    Node *Head = create(arr,0);
    // Head = delete_from_beginning(Head);
    // delete_from_end(Head);
    // deletion_from_particular_location(Head,2);
    Head = reverse(Head);
    Node *alpha = Head;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->next;
    }
 }