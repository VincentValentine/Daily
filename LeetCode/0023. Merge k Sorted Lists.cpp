class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;

        while(lists.size() > 1) {
            lists.push_back(merge(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }

        return lists.front();
    }

    ListNode* merge(ListNode* L1, ListNode* L2) {
        if(L1 == nullptr) return L2;
        if(L2 == nullptr) return L1;

        if(L1->val > L2->val) {
            L2->next = merge(L1, L2->next);
            return L2;
        } else {
            L1->next = merge(L1->next, L2);
            return L1;
        }
    }
};
