
void insertAtPosition(Node *head, int pos, int data)
{
    Node *temp=new Node(data);
    Node *cur=head;
    int i;
if(pos==1)
{
if(head==NULL)
return ;
if(head->next==head)
{
temp->next=head;
head->next=temp;
return ;
}
temp->next=head->next;
head->next=temp;
}
else{
for(i=0;i<pos-1;i++) {
cur=cur->next;
if(cur==head){
return ;
}

}
temp->next=cur->next;
cur->next=temp;
} 
}