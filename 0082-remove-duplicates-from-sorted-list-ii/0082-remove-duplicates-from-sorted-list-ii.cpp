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
    ListNode* deleteDuplicates(ListNode* head) {
        
        unordered_map<int,int>mp;
        ListNode* temp = head;

        while(temp){
            mp[temp->val]++;
            temp = temp->next;
        }
         ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        temp = head;

       
       

        while(temp){
            int val = temp->val;
            if(mp[val]>1){
                ListNode* del = temp;
                temp= temp->next;
                delete(del);
                prev->next = temp;
            }else{
                prev = temp;
                temp= temp->next;
            }
            
        }
        return dummy.next;

    }
};