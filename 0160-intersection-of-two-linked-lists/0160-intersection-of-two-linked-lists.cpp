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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA =0;
        ListNode* tempA =headA;
        while(tempA!=NULL)
        {
            lenA++;
            tempA = tempA->next;

        }
        
        int lenB =0;
        ListNode* tempB =headB;
        while(tempB!=NULL)
        {
            lenB++;
            tempB = tempB->next;

        }
        int diff= abs(lenA-lenB);
        tempA =headA;
        tempB = headB;
        if(lenA>lenB)
        {
            while(diff-- > 0)
            {
                tempA =tempA->next;
            }

        }
        
        if(lenA<lenB)
        {
            while(diff-- > 0)
            {
                tempB =tempB->next;
            }

        }
    while(tempA!=tempB)
    {
        tempA =tempA->next;
        tempB = tempB->next;
        if(tempA==NULL || tempB==NULL)
            return NULL;
        

    }
        return tempA;
		
	}
};