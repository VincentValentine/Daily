class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummyNode(-1);
        ListNode *pre = &dummyNode, *p, *q;
        pre->next = head;

        while((p=pre->next) && (q=pre->next->next)) {
            p->next = q->next;
            q->next = p;
            pre->next = q;
            pre = p;
        }

        return dummyNode.next;
    }
};
