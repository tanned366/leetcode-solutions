/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head != NULL && head->val == val){
        struct ListNode* todelete = head;
        head=head->next;
    }
    struct ListNode *temp = head, *ptemp = NULL;
    while (temp != NULL) {
        if (temp->val == val) {
            ptemp->next = temp->next;
            temp = ptemp->next;
        } else {
            ptemp = temp;
            temp = temp->next;
        }
    }
    return head;
}