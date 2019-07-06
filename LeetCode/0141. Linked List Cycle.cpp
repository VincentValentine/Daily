class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p = head, *q = p;
        
        while(q && q->next) {
            p = p->next;
            q = q->next->next;
            if(q == p) return true;
        }
        return false;
    }
};
