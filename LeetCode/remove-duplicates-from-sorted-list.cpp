// Que Link:- https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
        if(head==NULL)
        {
            return NULL;
        }
        
        ListNode* p = head;
        p=p->next;
        ListNode* q=head;
        
        while(p!=NULL)
        {
            if(q->val==p->val)
            {
                q->next=p->next;
            }else{
                q=p;
            }
            
            p=p->next;
            
        }
       return head;  
    }
};
