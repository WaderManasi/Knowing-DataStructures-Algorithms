Node * joinTheLists(Node * head1, Node * head2)
{
    if(head1==NULL)
    head1=head2;
    
    Node* temp=head1;
    while(temp->next!=NULL)
    temp=temp->next;
    
    temp->next=head2;
    return head1;
}