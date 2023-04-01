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
        ListNode* temp =head;
        int n =0;
        if(head==NULL)
            return NULL;
        while(temp->next!=NULL)
        {
            temp =temp->next; //till not reach the null
            n++; //6

        }
        temp->next = head; //7->1
        k =k%(n+1);
        int jump = n-k;  
        temp = head;
        while(jump)
        {
            temp= temp->next;
            jump--;

        }
        ListNode* returnnode = temp->next;
        temp->next =NULL;
        
        return returnnode;
        
        
    }
};
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//        if(!head)
//            return NULL;
//         int n = 1;
//         ListNode* tail = head;
//         while(tail->next){
//             n++;
//             tail = tail->next;
//         }
//         tail->next = head;
//         int sz = n - k % n;
//         for(int i = 0; i < sz; i++){
//             tail = tail->next;
//         }  
//         head = tail->next;
//         tail->next = NULL;
//         return head;
//     }
// };