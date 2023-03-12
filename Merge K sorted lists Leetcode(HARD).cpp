class Solution {
public:
    ListNode* mergeTwoLists(ListNode* &list1, ListNode* &list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* dummyNode= new ListNode(-1);
        ListNode* p3=dummyNode;
        while(p1!=NULL && p2!=NULL){
            if(p1->val<p2->val){
                p3->next=p1;
                p1=p1->next;
            }
            else{
                p3->next=p2;
                p2=p2->next;
            }
            p3=p3->next;
        }
        while(p1!=NULL){
            p3->next=p1;
            p3=p3->next;
            p1=p1->next;
        }
        while(p2!=NULL){
            p3->next=p2;
            p3=p3->next;
            p2=p2->next;
        }
        return dummyNode->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size()==0){
            return NULL;
        }
        else if (lists.size()==1){
            return lists[0];
        }
        else{
            while (lists.size()>1){
                lists.push_back(mergeTwoLists(lists[0],lists[1]));
                lists.erase(lists.begin());
                lists.erase(lists.begin());
            }
            return lists[0];
        }
        
    }
};
