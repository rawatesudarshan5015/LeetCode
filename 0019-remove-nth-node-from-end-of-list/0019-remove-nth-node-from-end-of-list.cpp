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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==0) return head;
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==n) return head->next;
        count = count-n;

        temp = head;
        while(count>=2){
            temp = temp->next;
            count--;
        }

        temp->next= temp->next->next;

        return head;
        
    }
};