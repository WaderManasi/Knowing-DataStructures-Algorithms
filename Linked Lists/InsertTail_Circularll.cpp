Node *insertInTail(Node * head, int data)
{
    Node* newn=new Node(data);
    if(head==NULL)
    {
        head=newn;
        newn->next=head;
    }
    else
    {
        Node* temp=head;
     
        while(temp->next!=head)
        {
             temp=temp->next;
        }
        temp->next=newn;
        newn->next=head;
    }
    return head;
}