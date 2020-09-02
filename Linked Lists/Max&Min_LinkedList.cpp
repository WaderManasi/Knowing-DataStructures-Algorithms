//Given a singly linked list of N elements. The task is to find the maximum and minimum element.

int maximum(Node *head)
{
   vector<int>v;
   int max=0;
   if(head==NULL)
   return max;
   Node* temp=head;
   while(temp!=NULL)
   {
       v.push_back(temp->data);
       temp=temp->next;
   }
   return *max_element(v.begin(),v.end());
}

int minimum(Node *head)
{
    vector<int>v;
   int max=0;
   if(head==NULL)
   return max;
   Node* temp=head;
   while(temp!=NULL)
   {
       v.push_back(temp->data);
       temp=temp->next;
   }
   return *min_element(v.begin(),v.end());
}