class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode *dummy = new ListNode(-1), *cur, *pre, *tmp;
        dummy->next = head, cur = head, pre = dummy;

        while(cur && cur->next) {
            if(cur->val <= cur->next->val) { cur = cur->next; continue; }
            else {
                tmp = cur->next;
                while(pre->next->val < tmp->val) pre = pre->next;
                cur->next = cur->next->next;
                tmp->next = pre->next;
                pre->next = tmp; 
                pre = dummy;
            }
        }

        return dummy->next;
    }
};
