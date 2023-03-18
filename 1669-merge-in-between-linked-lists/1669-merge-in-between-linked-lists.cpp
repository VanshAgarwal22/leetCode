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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *ptr = list1,*save = list1, *end = list2;
            
        for(int i=0;i<a-1;i++){
           // if(ptr==NULL) return NULL;
            ptr = ptr->next;
        }
        for(int i=0;i<=b;i++){
            save = save->next;
        }
        while(end->next!=NULL){
            end = end->next;
        }
        ptr->next = list2;
        
        end->next = save;
        
        return list1;
    }
};