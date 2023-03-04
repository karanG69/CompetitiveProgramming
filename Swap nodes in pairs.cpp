class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        while(temp1!=NULL){
            int temp=temp1->val;
            temp1->val=temp2->val;
            temp2->val=temp;
            if (temp2->next==NULL){
                break;
            }
            else{
                temp1=temp2->next;
            }
            temp1=temp2->next;
            if(temp1->next==NULL){
                break;
            }
            else{
                temp2=temp1->next;
            }
        }
        return head;
    }
};
