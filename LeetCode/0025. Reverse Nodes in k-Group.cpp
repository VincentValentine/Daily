class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt = 0;
        ListNode *cur = head, *tmp;
        while(cur && cnt!=k) {
            ++cnt;
            cur = cur->next;
        }

        if(cnt == k) {
            cur = reverseKGroup(cur, k);
            while(cnt != 0) {
                --cnt;
                tmp = head->next;
                head->next = cur;
                cur = head;
                head = tmp;
            }
            head = cur;
        }

        return head;
    }
};
