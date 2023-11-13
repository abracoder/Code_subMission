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
    bool isPalindrome(ListNode* head) {
     
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        cout<< slow->val;
        
        ListNode *nex = NULL;
        ListNode *prev = NULL;
    
        
        while(slow->next){
            nex = slow ->next ->next;
            slow->next->next = prev;
            prev = slow->next;
            slow->next = nex;
        }
        
        slow = prev;
        
        while(slow){
            if(head ->val != slow->val) return false;
            slow = slow->next;
            head = head ->next;
        }
        
        
        return 1;
        
    }
};