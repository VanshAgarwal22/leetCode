class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* prev = head, *curr= prev->next;

        while(curr){
            
            if(prev->val==0){       
                while(curr->val!=0){   
                    prev->val +=curr->val;
                    curr = curr->next;
                }
                if(curr->next == NULL){ 
                    prev->next = NULL;
                    break;
                }
                if(curr->val==0){   
                    prev->next=curr;
                    prev=curr;
                }
            }
            curr=curr->next;
        }
        return head;
    }
};

