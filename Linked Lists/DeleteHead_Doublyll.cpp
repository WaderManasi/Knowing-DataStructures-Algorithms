Node *deleteHead(Node * head)
{
   if(head==NULL) return NULL;
   Node* temp=head;
   
   head=temp->next;
   head->prev=NULL;
   
   delete temp;
   return head;
}