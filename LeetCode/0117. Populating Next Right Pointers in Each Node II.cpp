class Solution {
public:
    Node* connect(Node* root) {
        Node *dummy = new Node(-1, nullptr, nullptr, nullptr), *cur = dummy, *head = root;

        while(root) {
            if(root->left) { cur->next = root->left; cur = cur->next; }
            if(root->right) { cur->next = root->right; cur = cur->next; }
            root = root->next;
            if(!root) { cur = dummy; root = dummy->next; dummy->next = nullptr; }
        }

        return head;
    }
};
