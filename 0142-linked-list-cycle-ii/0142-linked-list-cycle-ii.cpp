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
        int i;
        ListNode* slow = head;
        ListNode* fast =head;
        bool cyclefound = false;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast= fast->next->next;
            slow =slow->next;
            
            if(fast==slow)
            {
                cyclefound =true;
                break;

            }

        }
        //shift any pointer to rhe head
        if(cyclefound==false)return NULL;
        fast =head;
        while(slow!=fast)
        {
            slow = slow->next;
            fast = fast->next;

        }
        
       return slow;
        
    }
};