/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if ( !head || !head ->next) return NULL;
        
        
        ListNode *fast = head, *slow = head;
         ListNode *dummy =head;
        
        
//         do {
//             fast = fast->next->next;
//             slow = slow->next;
            
//         }
//         while(fast != slow);
        
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            
            if(slow == fast){
                while(dummy != slow){
                    dummy = dummy->next;
                    slow = slow->next;
                }
                return dummy;
            }
        }
        
        
       
        
//         while(dummy != slow){
//             dummy = dummy->next;
//             slow = slow->next;
            
//         }
        
//         return dummy;
        
        return NULL;
    }
};