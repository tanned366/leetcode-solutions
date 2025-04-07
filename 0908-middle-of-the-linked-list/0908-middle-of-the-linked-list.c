/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int pos=1;
    struct ListNode *temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
        pos++;
    }
    temp=head;
    for(int i=0; i<pos/2; i++) temp = temp->next;
    return temp;
}