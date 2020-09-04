Node *insertInHead(Node * head, int data)
{
    Node* newn = new Node(data);
    
    if(head==NULL)
    head=newn;
    else
    {
        Node* temp=head;
        newn->next=head;
        head->prev=newn;
        head=newn;
    }
    return head;
}