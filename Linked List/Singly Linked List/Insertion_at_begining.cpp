#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        next = nullptr;
    }
};

int main(){
    int a;
    cin>>a;
    if(a == -1) return 0;
    Node * Head = new Node(a);
    Node *temp =  Head;
    Node *Tail;
    while(true){
        cin>>a;
        if(a == -1) break;
        Node *make = new Node(a);
        temp->next = make;
        temp = temp->next;
        Tail = make;
    }
    cin>>a;
    if(a!=-1){
        Node *beg = new Node(a);
        beg->next = Head;
        Head = beg;
    }
    Node *alpha = Head;
    while(alpha!= nullptr){
        cout<<alpha->value<<" ";
        alpha = alpha->next;
    }
    cout<<Tail->value;
}