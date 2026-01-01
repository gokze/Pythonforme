struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* current=head;
    if(head==NULL){
        return head;
    }
    while(current->next!=NULL){
        if(current->next->val==current->val){
            struct ListNode* temp=current->next;
            current->next=current->next->next;
            free(temp);
        }
        else{
            current=current->next;
        }
    }
    return head;
}
