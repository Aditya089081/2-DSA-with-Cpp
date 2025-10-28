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
Node *rotate(Node *Head,int k){
    Node *prev = nullptr;
    Node *curr = Head;
    while(k--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = nullptr;
    Node *Tail = curr;
    while(Tail->next){
        Tail = Tail->next;
    }
    Tail->next = Head;
    return curr;
}
int main(){
    int arr[]={1,2,3,4,5,6,-1};
    Node *Head = create(arr,0);
    int k = 2;
    int size = LLsize(Head);
    Head = rotate(Head,size-k);
    Node *alpha = Head;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->next;
    }
}