/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {

        if(head==NULL){
            return head;
        }

        Node* temp=head;
        Node* next= NULL;
        while(temp!=NULL){
            if(temp->child!=NULL){
                next=temp->next;
                temp->next=flatten(temp->child);

                temp->next->prev=temp;
                temp->child=NULL;

                while(temp->next!=NULL){
                    temp=temp->next;
                }
                if(next!=NULL){
                    temp->next=next;
                    next->prev=temp;
                }
             }

            else{
                temp=temp->next;
            }
        }
        return head;
        
    }
};
