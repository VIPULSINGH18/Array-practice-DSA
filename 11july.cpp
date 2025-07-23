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
class Solution{
    public:
    ListNode* reverseKGroup(ListNode* head,int k){
        int cnt=0;
        ListNode* temp=head;
        while(cnt<k){
            if(temp==NULL){
                return head;
            }
            temp=temp->next;
            cnt++;
        }
        ListNode* prev_node = reverseKGroup(temp,k);
        cnt=0;
        temp=head;
        while(cnt<k){
            ListNode* next= temp->next;
            temp->next=prev_node;
            prev_node=temp;
            temp=next;
            cnt++;
        }
         return prev_node;
    }
   
    };

