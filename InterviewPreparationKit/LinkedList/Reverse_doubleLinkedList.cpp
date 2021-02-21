//  https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=linked-lists


DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* current = head;
    DoublyLinkedListNode* previous = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    while(current != NULL){
        previous = current->prev;
        current->prev = current->next;
        current->next = previous;
        current = current->prev;
    }
    if(previous != NULL){
      head = previous->prev;
      head->prev = NULL;
    }
    
    return head;
}
