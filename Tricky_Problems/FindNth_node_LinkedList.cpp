///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader                                                   //
//Program  :To Find nth node from end/start of a (Singly Linear) Linked List.    //
//Language :C++  (Object Oriented Approach)                                      //
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
// Slightly different approach ,with 'void' return type                           //
///////////////////////////////////////////////////////////////////////////////////

typedef struct node
{
    int data;
    struct node* next;
}NODE,*PNODE;
///////////////////////////////////////////////////////////////////////////////////

class SinglyLinearLL
{
    PNODE head;
    int ct;
    public:
            SinglyLinearLL();          //constructor
            ~SinglyLinearLL();         //To deallocate the used memory

            void Insert(int,int);

            void Delete(int);

            int NodeFromEnd(int);          //get nth node from ending of Linked List
            int NodeFromStart(int);        //get nth node from starting of Linked List

            void DisplayLL();           //to Display the Linked List
            int Count();                //Display total number of nodes present in Linked List
};
///////////////////////////////////////////////////////////////////////////////////
//Initializing memory
SinglyLinearLL::SinglyLinearLL()
{
    head=NULL;
    ct=0;
}
///////////////////////////////////////////////////////////////////////////////////
//To get total number of nodes/elements present in the Linked List
int SinglyLinearLL::Count()
{
    ct=0;
    PNODE temp=head;
    while(temp!=NULL)
    {
        ct++;
        temp=temp->next;
    }
    return ct;
}
///////////////////////////////////////////////////////////////////////////////////
//Display entire Linked List
void SinglyLinearLL::DisplayLL()
{
    PNODE temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

///////////////////////////////////////////////////////////////////////////////////
//Inserting element at desired Position in the Linked List
void SinglyLinearLL::Insert(int pos,int n)
{
    int tot=Count();
     PNODE temp=head;
    PNODE newn=new node;
    newn->data=n;
    newn->next=NULL;
    if(pos<1 || pos>tot+1)
    {
        cout<<"\nPosition invalid (element cannot be inserted";
        return;
    }
    else if(pos==1)
    {
        //To insert element at beginning
    if(temp==NULL)
    {
        head=newn;
    }else if(temp!=NULL)
    {
        newn->next=head;
        head=newn; 
    }
    }
    else if(pos==tot+1)
    {
        //To insert element at end
        if(head==NULL)
        {
            head=newn;
        }
    
    else
    {
        while(temp->next!=NULL)
        {
         temp=temp->next;
        }
       temp->next=newn;
    }
    }
    else
    {
        for(int i=1;i<tot-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }  
}
///////////////////////////////////////////////////////////////////////////////////
//
int SinglyLinearLL::NodeFromStart(int pos)
{
    PNODE temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    return temp->data;
}
///////////////////////////////////////////////////////////////////////////////////
//
int SinglyLinearLL::NodeFromEnd(int pos)
{
    PNODE temp=head;
    int tot=Count()-pos;
    if(head==NULL)
    {
        return ;
    }
    else{
    for(int i=0;i<tot;i++)
    {
        temp=temp->next;
    }
    return temp->data;
    }
}
///////////////////////////////////////////////////////////////////////////////////
//Destructor:  to deallocate the used memory 
SinglyLinearLL::~SinglyLinearLL()
{
    PNODE temp=head;
    if(head==NULL)
        return;
    else if(head!=NULL)
    {
        while(head!=NULL)
        {
            head=head->next;
            delete temp;
            temp=head;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////
//main function of the program
///////////////////////////////////////////////////////////////////////////////////
int main()
{
    SinglyLinearLL obj;
    obj.Insert(1,100);
    obj.Insert(2,200);
    obj.Insert(3,300);
    obj.Insert(4,400);
    obj.Insert(5,500);
    obj.Insert(6,600);

    cout<<"\nLinked List: ";
    obj.DisplayLL();

    cout<<"\n1st Node from End: "<<obj.NodeFromEnd(1);
    cout<<"\n2nd Node from End: "<<obj.NodeFromEnd(2);

    cout<<"\n5th Node from Start: "<<obj.NodeFromStart(5);
    cout<<"\n3rd Node from Start: "<<obj.NodeFromStart(3);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//End of program                                                                 //
///////////////////////////////////////////////////////////////////////////////////