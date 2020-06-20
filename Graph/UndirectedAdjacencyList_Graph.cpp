///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader                                                   //
//Program  :Graph: Undirected Adjacency List                                       //
//Language :C++  (Object Oriented Approach)                                      //
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#define MAX 30
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
class node
{
    public:
            int data;
            node* next;
}*arr[MAX];

///////////////////////////////////////////////////////////////////////////////////
class UndirAdj_List:public node
{
    int v,v1,v2;
    public:
            UndirAdj_List()
            {
                v=v1=v2=0;
            }
            void CreateList();
            void DisplayList();
};
///////////////////////////////////////////////////////////////////////////////////
void UndirAdj_List::CreateList()
{
    int choice;
    cout<<"\nEnter total vertices: ";
    cin>>v;
    do{
        cout<<"\nEnter both vertices: ";
        cin>>v1>>v2;
        if(v1>=v || v2>=v)
  		{
            cout<<"\nEdge not present in graph!";
            continue;
        }
        node* ptr1=new node;
        ptr1->data=v2;
        ptr1->next=NULL;

        if(arr[v1]==NULL)
        {
            arr[v1]=ptr1;
        }
        else
        {
            node* temp=arr[v1];
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr1;
        }
        //undirected mechanism
        node* ptr2=new node;
        ptr2->data=v1;
        ptr2->next=NULL;

        if(arr[v2]==NULL)
        {
            arr[v2]=ptr2;
        }        
        else
        {
            node* temp=arr[2];
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }   
            temp->next=ptr2;
        }
        cout<<"\nWant to continue?[y/Y]";
        cin>>choice;     
    }while(choice=='Y' || choice=='y');
}
///////////////////////////////////////////////////////////////////////////////////
void UndirAdj_List::DisplayList()
{
 for(int i=0;i<v;i++)
 {
   node* temp=arr[i];
   cout<<"\nAdjacency List of vertex "<<i<<" is ";
   while(temp)
    {
   	cout<< "==>>"<<temp->data;
   	temp=temp->next;
    }
 }
}
///////////////////////////////////////////////////////////////////////////////////
int main()
{
    UndirAdj_List obj;
    int ch;
  do{
  cout<<"\n\nSelect: \n1] Create Adjacency List of Undirected graph\n2] Display Adjacency List of UnDirected graph\n3] Exit\n";
  cin>>ch;
  switch(ch)
  {
   case 1:
            obj.CreateList();
            break;
   case 2:
            obj.DisplayList();
            break;
   case 3:
  		    return 0;
   default:
  		    cout<<"\nPlease enter correct choice!!";
  			break;
  }
 }while(1);
}

///////////////////////////////////////////////////////////////////////////////////
//End of program                                                                 //
///////////////////////////////////////////////////////////////////////////////////