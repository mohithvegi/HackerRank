// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=linked-lists


SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* previous = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* previous1 = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* current1 = head;
    int length=0;
    int count = 0;
    while(current!=NULL){
        length++;
        previous = current;
        current = current->next;
    }
    temp->data = data;
    if(head == NULL){
        head = temp;
        head->next = NULL;
    }
    if(position == 0){
        temp->next = head;
        head = temp;
    }
    else if(position == length){
        previous->next = temp;
    }
    else{
        while(count < position && current1->next != NULL){
            previous1 = current1;
            current1 = current1->next;
            count++;
        }
        previous1->next = temp;
        temp->next = current1;
    }

    return head;

}