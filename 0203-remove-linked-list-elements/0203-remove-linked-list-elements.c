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
            temp = temp->next;
        } else {
            ptemp = temp;
            temp = temp->next;
        }
    }
    return head;
}

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

struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head != NULL && head->val == val){
        struct ListNode* todelete = head;
        head=head->next;
        free(todelete);
    }
    struct ListNode *temp = head, *ptemp = NULL;
    while (temp != NULL) {
        if (temp->val == val) {
            ptemp->next = temp->next;
            free(temp);
            temp = ptemp->next;
        } else {
            ptemp = temp;
            temp = temp->next;
        }
    }
    return head;
}
