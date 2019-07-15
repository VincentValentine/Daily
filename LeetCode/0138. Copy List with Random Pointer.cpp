class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummy = new Node(-1), *p, *q;
        map<Node*, Node*> mp;

        for(p=dummy, q=head; q; p=p->next, q=q->next) {
            p->next = new Node(q->val);
            mp[q] = p->next; 
        }
        p->next = nullptr;
        for(p=dummy->next, q=head; q; p=p->next, q=q->next)
            p->random = mp[q->random];

        return dummy->next;
    }
};
