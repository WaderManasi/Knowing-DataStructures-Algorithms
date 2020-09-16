//detect loop in singly linked list

bool has_cycle(Node* head) {
    if(head==NULL) return false;
    Node* fast=head->next;
    Node* slow=head;
    int flag=0;
    while(fast && fast->next && slow)
    {
        if(slow==fast)
           {
            flag=1;
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    return flag?true:false;
}