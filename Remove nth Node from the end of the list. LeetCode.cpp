class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=head;
        while (temp!=NULL){
            len+=1;
            temp=temp->next;
        }
        int target=len-n+1;
        if(target==1){
            head=head->next;
            return head;
        }
        ListNode* prev=NULL;
        temp=head;
        int i=1;
        while (temp!=NULL && i<target){
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        return head;
    }
};
