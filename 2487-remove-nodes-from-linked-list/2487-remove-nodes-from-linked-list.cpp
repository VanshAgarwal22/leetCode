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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        
       ListNode* curr =head;
       ListNode * prev =NULL;
        
        while(curr!=NULL )
        {
        int val = curr->val;
         while(!st.empty() && st.top()->val<val)
             st.pop();
         st.push(curr);
         curr =curr->next;
         
        }
        while(!st.empty())
        {
            curr =st.top();
            curr->next =prev;
            st.pop();
            prev =curr;
          
        }
        
       return prev;

    }
};