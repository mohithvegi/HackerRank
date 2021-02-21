// https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=linked-lists


// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    DoublyLinkedListNode* previous = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    DoublyLinkedListNode* previous1 = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    DoublyLinkedListNode* current = head;
    DoublyLinkedListNode* current1 = head;
    temp->data = data;
    int length = 0;
    while(current1 != NULL){
        length++;
        previous1 = current1;
        current1 = current1->next;
    }
    if(temp->data < head->data){
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    }
    else if(data > previous1->data){
        previous1->next = temp;
        temp->prev = previous1;
        temp->next = NULL;
    }
    else{
        while(current->data < data && current->next != NULL){
            previous = current;
            current = current->next;
        }
        previous->next = temp;
        temp->prev = previous;
        temp->next = current;
        current->prev = temp;
    }
    return head;
}