#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node *prev;
    Node *next;
    Node(int value){
        this->value = value;
        prev = nullptr;
        next = nullptr;
    }
};
Node *create(int arr[],int index,Node *previous){
    if(arr[index] == -1){
        return nullptr;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = previous;
    temp->next = create(arr,index+1,temp);
    return temp;
}
void printHead(Node *Head){
    Node *alpha = Head;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->next;
    }
}
Node *tail(Node *Head){
    Node *alpha = Head;
    while(alpha->next){
        alpha = alpha->next;
    }
    return alpha;
}
void printTail(Node *Tail){
    Node *alpha = Tail;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->prev;
    }
}
void deleteDuplicates(Node *Head){
    Node *alpha = Head->next;
    Node *temp = nullptr;
    while(alpha){
        if(alpha->value == alpha->prev->value){
            temp = alpha;
            alpha->prev->next = alpha->next;
            if(alpha->next){
                alpha->next->prev = alpha->prev;
            }
            alpha = alpha->next;
            delete temp;
        }else{
            alpha = alpha->next;
        }
    }
}
int main(){
    int arr[] = {1,1,1,1,1,1,1,1,1,22,2,2,22,2,2,33,3,3,3,3,3,4,4,4,4,4,5,5,6,7,7,-1};
    Node *Head = create(arr,0,nullptr);
    // Node* Tail = tail(Head);
    deleteDuplicates(Head);
    printHead(Head);
    cout<<endl;
    // printTail(Tail);
}