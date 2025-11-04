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
    int arr1[]={9,9,9,-1};
    int arr2[]={1,-1};
    Node *head1 = create(arr1,0);
    Node *head2 = create(arr2,0);
    head1 = reverse(head1);
    head2 = reverse(head2);
    int carry = 0;
    Node *l1 = head1;
    Node *l2 = head2;
    Node *dummy = new Node(0);
    Node *temp = dummy;
    while(l1||l2||carry){
        int sum = carry;
        if(l1){
            sum+=l1->value;
            l1 = l1->next;
        }
        if(l2){
            sum+=l2->value;
            l2 = l2->next;
        }
        dummy->next = new Node(sum%10);
        carry = sum/10;
        dummy = dummy->next;
    }
    temp = reverse(temp->next);
    print(temp);
    
}