vector<int> displayList(Node *head)
{
    vector<int>v;
    if(head==NULL)
        return v;
    Node* temp=head;
    while(temp)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    return v;
    
}