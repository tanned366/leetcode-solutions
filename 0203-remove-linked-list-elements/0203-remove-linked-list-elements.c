/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *temp = head, *ptemp = NULL;
    while (temp != NULL) {
        if (temp->val == val) {
            if (temp == head)
                head = head->next;
            else
                ptemp->next = temp->next;
        } else {
            ptemp = temp;
        }
        temp = temp->next;
    }
    return head;
}