Node *deleteTail(Node * head)
{
   if(head==NULL)   return NULL;
   
   Node* temp=head;
   
   while(temp->next->next)    temp=temp->next;
   
   delete temp->next;
   temp->next=NULL;
   
   return head;
}