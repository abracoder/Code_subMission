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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || k==0 || !head->next) return head;
        
        ListNode *curr = head;
        int count =0; 
        
        while(curr && curr->next){
            count++;
            curr = curr->next;
        }
        // cout << count;
        count++;
        
        curr->next = head;
        k = k%count;
        k = count -k;
        
        while(k--) curr = curr->next;
        head = curr->next;
        curr->next = NULL;
        
        return head;
        
    }
};