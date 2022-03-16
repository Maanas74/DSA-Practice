// Que Link:- https://leetcode.com/problems/linked-list-cycle/

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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        {
            return false;
        }
        
        unordered_map<ListNode*,int> a;
        
        while(head->next!=NULL)
        {
            if(a.find(head)!=a.end())
            {
                return true;
            }else{
                a[head]=head->val;
                head=head->next;
            }
        }
        
        return false;
        
    }
};
