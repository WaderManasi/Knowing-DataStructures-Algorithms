Node * deleteTail(Node * head)
{
    if(head==NULL)  return NULL;
    
    Node* temp=head;
    while(temp->next->next!=head) temp=temp->next;
    temp->next=head;
    return head;
}