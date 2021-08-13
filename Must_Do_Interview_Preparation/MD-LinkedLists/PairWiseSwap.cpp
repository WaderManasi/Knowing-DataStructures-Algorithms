struct Node* pairwise_swap(struct Node* head)
{
   
    Node* temp=head;
    
    while(temp!=NULL)
    {
        if(temp->next!=NULL){
        int t=temp->data;
        temp->data=temp->next->data;
        temp->next->data=t;
        temp=temp->next->next;
        }
        else 
        return head;
    }
    return head;
}