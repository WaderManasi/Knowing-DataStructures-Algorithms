int getMiddle(Node *head)
{
    if(!head)   return 0;
   Node* slow = head;
   Node* fast = head->next;
   while(fast!=NULL)
   {
       fast=fast->next;
       if(fast!=NULL)
        fast=fast->next;
        slow=slow->next;
   }
   return slow->data;
}
