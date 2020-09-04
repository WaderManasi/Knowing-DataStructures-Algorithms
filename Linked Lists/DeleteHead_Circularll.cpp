Node * deleteHead(Node *head)
{
   if(head==NULL)
   return NULL;
   
   Node* temp=head;
   Node* temp1=head;
   while(temp->next!=head)  temp=temp->next;
   temp->next=temp1->next;
   head=temp1->next;
   temp1->next=NULL;
   return head;
}