
//solution
bool isCircular(Node *head)
{
   if(head==NULL || head->next==head) return true;
   Node* temp=head;
   while(temp->next!=NULL && temp->next!=head)
   temp=temp->next;
   
   return (temp->next==head)?true:false;
}