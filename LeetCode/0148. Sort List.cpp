class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        
        ListNode *p, *q;
        for(p=head, q=p->next; q&&q->next; p=p->next, q=q->next->next);
        q = p->next; p->next = nullptr; p = head; 

        return merge(sortList(p), sortList(q));
    }

    ListNode* merge(ListNode* p, ListNode* q) {
        ListNode *dummy = new ListNode(-1), *cur = dummy;

        while(p && q) {
            if(p->val < q->val) { cur->next = p; p = p->next; }
            else { cur->next = q; q = q->next; }
            cur = cur->next;
        }
        if(p) cur->next = p;
        else cur->next = q;

        return dummy->next;
    }
};
