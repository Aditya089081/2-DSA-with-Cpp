#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int value;
    Node *next;
    Node(int value){
        this->next = nullptr;
        this->value = value;
    }
};
Node *create(int arr[],int index){
    if(arr[index] == -1){
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
void remove_kth(Node *Head,int k){
    if(k <= 1){
        while (Head) {
            Node* temp = Head;
            Head = Head->next;
            delete temp;
        }
        return;
    }
    Node *prev = nullptr;
    Node *curr = Head;
    int count = k;
    while(curr){
        count = k;
        while(count--){
            if(count){
                prev = curr;
                curr = curr->next;
            }else{
                Node *temp = curr;
                prev ->next = curr->next;
                curr = curr->next;
                delete temp;
            }

        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,-1};
    Node *Head = create(arr,0);
    remove_kth(Head,2);

    print(Head);


    
}