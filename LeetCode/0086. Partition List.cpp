class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode dummyNodeA(-1), dummyNodeB(-1);
        ListNode *p = &dummyNodeA, *q = &dummyNodeB;

        while(head) {
            if(head->val < x) {
                p->next = head;
                p = p->next;
            } else {
                q->next = head;
                q = q->next;
            }
            head = head->next;
        }
        p->next = dummyNodeB.next, q->next = nullptr;

        return dummyNodeA.next;
    }
};
