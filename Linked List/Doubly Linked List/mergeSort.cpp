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
Node *Middle(Node *head){
    Node *slow = head;
    Node *fast = head->next;
    while(fast&&fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node *merge(Node *head1,Node *head2){
    if(!head1)return head2;
    if(!head2)return head1;
    Node *result = nullptr;
    if(head1->value<head2->value){
        result = head1;
        result->next = merge(head1->next,head2);
    }else{
        result = head2;
        result->next = merge(head1,head2->next);
    }
    return result;
}
Node *mergeSort(Node *head){
    if(!head || !head->next) return head;
    Node *middle = Middle(head);
    Node *SecondOne = middle->next;
    middle->next = nullptr;
    Node *left = mergeSort(head);
    Node *right = mergeSort(SecondOne);
    return merge(left,right);
}
void print(Node *Head){
    Node *alpha = Head;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->next;
    }
}
int main(){
    int arr[] = {1,2,3,4,2,3,4,5,6,7,-1};
    Node *Head = create(arr,0);
    print(Head);
    cout<<endl;
    Head = mergeSort(Head);
    print(Head);
}