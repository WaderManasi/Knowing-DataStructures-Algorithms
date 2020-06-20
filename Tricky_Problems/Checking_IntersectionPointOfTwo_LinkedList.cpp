///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader                                                   //
//Program  :To Find the merge point between two (Singly Linear) Linked List.     //
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

            void MergePoint();          //to find merge point of two linked lists

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
void SinglyLinearLL::MergePoint()
{
    PNODE temp,curr;
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
    SinglyLinearLL first;
    SinglyLinearLL second;

    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//End of program                                                                 //
///////////////////////////////////////////////////////////////////////////////////