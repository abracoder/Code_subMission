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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head || !head->next) return head;
        
        ListNode *dummyHead = new ListNode();
        dummyHead->next = head;
        
        ListNode *pre = dummyHead, *curr = dummyHead, *nex;
        
        int count =0;
        
        while(curr->next){
            curr = curr->next;
             count++;
        }
        
        while(count >= k){
            curr = pre->next;
            nex = curr->next;
            
            
            for(int i= 1; i<k; i++){
                curr->next = nex->next;
                nex ->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
            count  -= k;
        }
        
        return dummyHead ->next;
    }
};