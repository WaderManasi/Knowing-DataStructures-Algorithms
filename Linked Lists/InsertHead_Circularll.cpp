Node *insertInHead(Node * head, int data)
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
        do{
            temp=temp->next;
        }while(temp->next!=head);
        newn->next=head;
        head=newn;
        temp->next=head;
    }
    return head;
}