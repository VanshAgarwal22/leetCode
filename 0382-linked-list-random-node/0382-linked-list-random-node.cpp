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
    int len =0;
    ListNode* headnode;
    
    Solution(ListNode* head) {
        headnode = head;
        ListNode * temp =headnode;
        while(temp)
        {
            len++;
            temp =temp->next;

        }
        
    }
    
    int getRandom() {
        int random_index =rand()%len;
        
        ListNode * temp =headnode;
        for(int i=0; i<random_index; i++)
        {
            temp =temp->next;
        }
        return temp->val;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */