///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader.                                                  //
//Program  :Linear Queue.                                                        //
//Approach :Dynamic Approach using Linked Lists.                                 //                                              
//Language :C++  (Object Oriented Approach)                                      //
//Functions:First In First Out (FIFO) fashion of inserting and removing elements //
//          in and from the queue.                                                            //
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

class LinearQueue
{
    PNODE head;
    int ct;
    public:
            LinearQueue();          //constructor
            ~LinearQueue();         //To deallocate the used memory

            void Insert(int);

            void Remove();

            void DisplayQueue();         //to Display the Queue
            int Count();                //Display total number of elements in queue
};
///////////////////////////////////////////////////////////////////////////////////
//Constructor: Initializing memory
LinearQueue::LinearQueue()
{
    head=NULL;
    ct=0;
}
///////////////////////////////////////////////////////////////////////////////////
//To get total number of nodes/elements present Queue
int LinearQueue::Count()
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
//Display entire Queue elements
void LinearQueue::DisplayQueue()
{
    PNODE temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
///////////////////////////////////////////////////////////////////////////////////
//Inserting element in the Queue
void LinearQueue::Insert(int n)
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
//Delete element from the Queue
void LinearQueue::Remove()
{
    if(head==NULL)
    {
        cout<<"\nNothing to delete";
        return;
    }
    else
    {
        PNODE temp=head;
        head=head->next;
        delete temp;
    }
}
///////////////////////////////////////////////////////////////////////////////////
//Destructor:  to deallocate the used memory 
LinearQueue::~LinearQueue()
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
    //creating instance of class
    LinearQueue obj;

    //Here one can opt for menu driven approach also!
    obj.Insert(10);
    cout<<"\n";
    obj.DisplayQueue();
    cout<<"\n";
    obj.Insert(20);
    obj.DisplayQueue();
    cout<<"\n";
    obj.Insert(30);
    obj.DisplayQueue();
    cout<<"\nSuccessfully inserted element in the Queue\n";
    obj.DisplayQueue();
    cout<<"\nTotal number of elements "<<obj.Count()<<"\n";

    obj.Remove(); 
    cout<<"\n";
    obj.DisplayQueue();  
    obj.Remove();
    cout<<"\n";
    obj.DisplayQueue();

    cout<<"\nSuccessfully deleted elements from Queue\n";
    obj.DisplayQueue();
    cout<<"\nTotal number of elements "<<obj.Count()<<"\n";
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//End of program                                                                 //
///////////////////////////////////////////////////////////////////////////////////