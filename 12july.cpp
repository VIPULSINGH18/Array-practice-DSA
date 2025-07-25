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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* first=head;
        ListNode* second= head->next;
        ListNode* prev_node= NULL;
       

        while(first!=NULL && second!=NULL){
            ListNode* third= second->next;
            second->next= first;
            first->next=third;

            if(prev_node==NULL){
                head=second;
            }
            else{
                prev_node->next=second;
            }

            prev_node=first;
            first=third;
            if(third!=NULL){
                second=third->next;
            }
            else{
                second=NULL;
            }
           
            

        }
        return head;
    }
};


// the end
