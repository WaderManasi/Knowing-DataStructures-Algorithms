///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader.                                                  //
//Program  :Stack Ooerations                                                     //
//Approach :Dynamic Approach using Linked Lists.                                 //
//Language :C++  (Object Oriented Approach)                                      //
//Functions:Last In First Out (LIFO) fashion to perform Push and Pop operations  //
//              on Stack.                                                        //
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
// Slighly different approach ,with 'void' return type                           //
///////////////////////////////////////////////////////////////////////////////////

typedef struct node
{
    int data;
    struct node* next;
}NODE,*PNODE;
///////////////////////////////////////////////////////////////////////////////////

class DynamicStack
{
    PNODE head;
    int ct;
    public:
            DynamicStack();          //constructor
            ~DynamicStack();         //destructor: To deallocate the used memory

            void Push(int);

            void Pop();

            void DisplayStack();        //to Display the entire stack
            int Count();                //Display total number of elements present in Stack.
};
///////////////////////////////////////////////////////////////////////////////////
//Initializing memory
DynamicStack::DynamicStack()
{
    head=NULL;
    ct=0;
}
///////////////////////////////////////////////////////////////////////////////////
//To get total number of nodes/elements present Stack
int DynamicStack::Count()
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
//Display entire Stack
void DynamicStack::DisplayStack()
{
    PNODE temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
///////////////////////////////////////////////////////////////////////////////////
//Push element onto Stack
void DynamicStack::Push(int n)
{
    PNODE temp=head;
    PNODE newn=new node;
    newn->data=n;
    newn->next=NULL;
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
///////////////////////////////////////////////////////////////////////////////////
//Pop element from the Stack
void DynamicStack::Pop()
{
    if(head==NULL)
    {
        cout<<"\nNothing to delete\n";
        return;
    }
    else if(head->next==NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        PNODE temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
}
///////////////////////////////////////////////////////////////////////////////////
//Destructor:  to deallocate the used memory 
DynamicStack::~DynamicStack()
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
    DynamicStack obj;

    //Here one can opt for menu driven approach also!
    obj.Push(10);
    obj.DisplayStack();
    cout<<"\n";

    obj.Push(20);
    obj.DisplayStack();
    cout<<"\n";
    
    obj.Push(30);
    obj.DisplayStack();
    cout<<"\n";

    cout<<"\nSuccessfully Pushed element onto stack";
    cout<<"\nTotal number of elements "<<obj.Count()<<"\n";

    obj.Pop();
    obj.DisplayStack();
    cout<<"\n";

    obj.Pop(); 
    obj.DisplayStack();
    cout<<"\n";

    cout<<"\nSuccessfully poped element from stack";
    cout<<"\nTotal number of elements "<<obj.Count()<<"\n";
  
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//End of program                                                                 //
///////////////////////////////////////////////////////////////////////////////////