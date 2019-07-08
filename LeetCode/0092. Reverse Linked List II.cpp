class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int i;
        ListNode *dummy = new ListNode(-1), *pre = dummy, *cur, *t;

        pre->next = head;
        for(i=0; i<m-1; ++i) pre = pre->next;
        cur = pre->next;
        for(i=0; i<n-m; ++i) {
            t = cur->next;
            cur->next = t->next;
            t->next = pre->next;
            pre->next = t;
        }

        return dummy->next;
    }
};
