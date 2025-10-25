// Node *reverse(Node *Head){
//     if(!Head||Head->next == nullptr){
//         return Head;
//     }
//     Node *prev = nullptr;
//     Node *curr = Head;
//     Node *fut = nullptr;
//     while(curr){
//         fut = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = fut;
//     }
//     return prev;
// }