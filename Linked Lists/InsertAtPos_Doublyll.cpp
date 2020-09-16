//Given a doubly-linked list, a position p, and an integer x. The task is to add a new node with value x at the position just after pth node in the doubly linked list.

void addNode(Node *head, int pos, int data)
{
   Node* newn= new Node(data);
   if(head==NULL)   head=newn;
   else
   {
       Node* temp=head;
       for(int i=0;i<pos;i++)
        temp=temp->next;   
        if(temp->next==NULL)
        {
            temp->next=newn;
            newn->prev=temp;
        }
        else
        {
            temp->next->prev=newn;
            newn->next=temp->next;
            newn->prev=temp;
            temp->next=newn;
        }
   }
}