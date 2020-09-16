//Given a doubly linked list, the task is to check if it is circular or not.
bool isCircular(Node * head)
{
   if(head==NULL) return false;
   Node* temp=head;
   Node* p=head->prev;
   while(temp->next!=head && temp->next!=NULL)
   {
       temp=temp->next;
   }
   return temp->next==head && temp==p?true:false;
   
}