class Solution {
public:
    int pairSum(ListNode* head) {
        int max_sum=0;
        ListNode* temp=head;
        int n=0;
        unordered_map<int,int> map;
        while (temp!=NULL){
            map.insert({n,temp->val});
            n+=1;
            temp=temp->next;
        }
        int i=0;
        while (i<=((n/2)-1)){
            int curr_sum=map[i]+map[n-1-i];
            if (curr_sum>max_sum){
                max_sum=curr_sum;
            }
            i++;
        }
        return max_sum;

    }
};
