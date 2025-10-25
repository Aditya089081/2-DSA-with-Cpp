#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node(int value) {
        this->value = value;
        next = nullptr;
    }
}; // ← semicolon required after class

Node* creating_Nodes(int arr[], int index, int size) {
    if (index == size) {
        return nullptr;
    }
    Node* temp = new Node(arr[index]);
    temp->next = creating_Nodes(arr, index + 1, size);
    return temp;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    Node* Head = creating_Nodes(arr, 0, size);
    Node* alpha = Head;
    while (alpha != nullptr) {
        cout << alpha->value << " ";
        alpha = alpha->next;
    }

    return 0;
}
