class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;

        int i = 0, n = 1;
        ListNode *p = head, *newHead, *newTail;
        for(; p->next!=nullptr; p=p->next, ++n);
        p->next = head;
        for(newTail=head; i<n-k%n-1; newTail=newTail->next, ++i);
        newHead = newTail->next; newTail->next = nullptr;
        
        return newHead;
    }
};
