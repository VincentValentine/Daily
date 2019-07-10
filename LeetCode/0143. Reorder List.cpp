class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *dummy = new ListNode(-1), *p, *q, *prev, *tmp;
        dummy->next = head;

        for(p=q=dummy; q&&q->next; p=p->next, q=q->next->next);
        for(prev=p, q=p->next; q&&q->next; ) {
            tmp = q->next;
            q->next = tmp->next;
            tmp->next = prev->next;
            prev->next = tmp;
        }
        for(p=head, q=prev->next, prev->next = nullptr; q; ) {
            tmp = p->next;
            p->next = q;
            q = q->next;
            p->next->next = tmp;
            p = tmp;
        }
    }
};
