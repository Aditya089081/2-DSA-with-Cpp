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
int main(){
    int a;
    cin>>a;
    if(a == -1) return 0;
    Node *Head = new Node(a);
    Node* temp = Head;
    while(true){
        cin>>a;
        if(a==-1) break;
        Node *Tail = new Node(a);
        temp->next = Tail;
        temp = temp->next;
    }

    Node *alpha = Head;
    while(alpha!=nullptr){
        cout<<alpha->value;
        cout<<" ";
        alpha = alpha->next;
    }
}