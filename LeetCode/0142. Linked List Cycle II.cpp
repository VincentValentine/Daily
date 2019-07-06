class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> a;
        ListNode *p = head;
        
        for(; p&&p->next; p=p->next) {
            if(a.find(p) != a.end()) return p;
            a.insert(p);
        }
        return nullptr;
    }
};
