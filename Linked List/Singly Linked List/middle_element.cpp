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
Node *middle_element(Node* Head){
    Node *slow = Head;
    Node *fast = Head;
    while(fast &&fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    int arr[] = {1,2,3,4,5,6,-1};
    Node *Head = create(arr,0);
    cout<<middle_element(Head)->value<<" ";
    cout<<endl;
    print(Head);


    
}