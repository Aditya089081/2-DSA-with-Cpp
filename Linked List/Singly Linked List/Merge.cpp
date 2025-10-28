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
Node *merge(Node *Head1,Node *Head2){
    Node *slow = Head1;
    Node *fast = Head2;
    Node *prev = nullptr;
    while(slow->next||fast->next){
        if(slow->value <=fast->value){
            prev = slow;
            slow = slow->next;
        }else{
            fast->next = slow;
            if(prev){
                prev->next = fast;
                fast = fast->next;
            }
        }
    }
    if(fast){
        slow->next = fast;
    }
}
int main(){
    int arr1[] = {3,2,4,5,7,1,-1};
    int arr2[] = {1,2,4,5,9,-1};
    Node *Head1 = create(arr1,0);
    Node *Head2 = create(arr2,0);
    Node *Head = merge(Head1,Head2);
    while(Head){
        cout<<Head->value<<" ";
        Head = Head->next;
    }
}