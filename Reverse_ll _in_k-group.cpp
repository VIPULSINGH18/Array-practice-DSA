class Reverse(){
	public:
		Node* reverse(Node* head,int k){
			Node* temp=head;
			int cnt=0;
			while(cnt<k){
				
				if(temp==NULL){
					return NULL;
				}
				
				temp=temp-next;
				cnt++;
			}
			
			
			Node* prev_node;
			prev_node=reverse(temp,int  k);
			
			
			temp=head;
			cnt=0;
			Node* next;
			
			while(cnt<k){
				next=temp->next;
				temp->next=prev_node;
				prev_node=temp;
				temp=next;
				cnt++
				
			}
			return prev_node;
			
		}
};
 
