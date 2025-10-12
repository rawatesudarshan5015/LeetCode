/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    void solve(ListNode* head){
        if (head == NULL || head->next == NULL)
            return;
        int curr = head->val;
        int next = head->next->val;
        head->val = next;
        head->next->val = curr;

        solve(head->next->next);
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        solve(temp);

        return head;
    }
};