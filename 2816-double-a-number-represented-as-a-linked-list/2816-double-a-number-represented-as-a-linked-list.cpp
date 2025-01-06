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

ListNode* reverseList(ListNode* head) {
        ListNode* p1 = head;
        if (p1 == nullptr || p1->next == nullptr)
            return p1;
        ListNode* p2 = p1->next;
        ListNode* p3 = p1->next->next;
        head->next = nullptr;
        while(p3 != nullptr) {
            p2->next = p1;
            p1 = p2;
            p2 = p3;
            p3 = p3->next;
        }
        p2->next = p1;
        return p2;
    }
    
    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head);

        ListNode* ptr = head;
        int carry=0;
        int temp ;

        while(1){
            temp = ptr->val;
            ptr->val = (temp*2+carry)%10;
            carry = (temp*2+carry)/10;
            if(ptr->next==NULL){
                break;
            }
            ptr=ptr->next;
        }

        if(carry==1){
            auto tmp = new ListNode;
            tmp->val = 1;
            tmp->next = NULL;
            ptr->next = tmp;
        }
        head = reverseList(head);
        return head;

        
    }
};