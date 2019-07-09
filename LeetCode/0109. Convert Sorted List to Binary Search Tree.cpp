class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return new TreeNode(head->val);

        ListNode *p = head, *q = p, *pre;
        while(q && q->next) {
            pre = p;
            p = p->next;
            q = q->next->next;
        }
        pre->next = nullptr;
        TreeNode *root = new TreeNode(p->val);
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(p->next);

        return root;
    }
};
