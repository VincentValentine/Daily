class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int i, len1, len2, cnt, carry, sum;
        ListNode *p = l1, *q = l2, *r = new ListNode(-1);
        ListNode *r1 = r;
        
        len1 = len2 = carry = 0;
        while(p->next != NULL) {
            ++len1;
            p = p->next;
        }
        while(q->next != NULL) {
            ++len2;
            q = q->next;
        }
        if(len1 > len2) {
            for(i=0; i<len1-len2; ++i) {
                q->next = new ListNode(0);
                q = q->next;
            }
        } else {
            for(i=0; i<len2-len1; ++i) {
                p->next = new ListNode(0);
                p = p->next;
            }
        }
        p = l1, q = l2;
        
        r1 = r;
        while(p != NULL) {
            sum = p->val+q->val+carry;
            carry = sum/10;
            sum %= 10;
            r->next = new ListNode(sum);
            r = r->next;
            p = p->next;
            q = q->next;
        }
        if(carry > 0) {
            r->next = new ListNode(carry);
            r = r->next;
        }
        r->next = NULL;
        
        return r1->next;
    }
};
