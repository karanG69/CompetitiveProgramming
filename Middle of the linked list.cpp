ListNode* middleNode(ListNode* head) {
        ListNode* F=head;
        ListNode* S=head;
        while(F !=NULL && F->next!=NULL){
            F=F->next->next;
            S=S->next;
        }
        return S;
