struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL)
        return head;

    struct ListNode* current = head;

    while (current->next != NULL) {
        if (current->next->val == current->val) {
            struct ListNode* temp = current->next;
            current->next = current->next->next;
            free(temp);   // free the duplicate node
        } else {
            current = current->next; // move only if no deletion
        }
    }
    return head;
}
