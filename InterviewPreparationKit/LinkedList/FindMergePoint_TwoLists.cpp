// https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=linked-lists


// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* current1 = head1;
    SinglyLinkedListNode* current2 = head2;
    SinglyLinkedListNode* current3 = head1;
    SinglyLinkedListNode* current4 = head2;
    int result = 0;
    int difference;
    int count1=0, count2=0;
    while(current3 != NULL){
        count1++;
        current3 = current3->next;
    }
    while(current4 != NULL){
        count2++;
        current4 = current4->next;
    }
    if(count1 >= count2){
        difference = count1 - count2;
        for(int i=0; i<difference; i++){
            current1 = current1->next;
        }
    }
    else if(count2 > count1){
        difference = count2 - count1;
        for(int j=0; j<difference; j++){
            current2 = current2->next;
        }
    }
    // while(current1 != NULL && current2 != NULL){
    //         if(current1 == current2){
    //             result = current1->data;
    //     }
    //     current1 = current1->next;
    //     current2 = current2->next;
    // }
    while(current1 != current2){
        current1 = current1->next;
        current2 = current2->next;
    }
    result = current1->data;
    return result;
}
