///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader                                                   //
//Program  :Graph: Directed Adjacency List                                       //
//Language :C++  (Object Oriented Approach)                                      //
///////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
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
class DirAdj_List:public node
{
    int v,v1,v2;
    public:
            DirAdj_List()
            {
                v=v1=v2=0;
            }
            void CreateList();
            void DisplayList();
};
///////////////////////////////////////////////////////////////////////////////////
void DirAdj_List::CreateList()
{
    int choice;
    cout<<"\nEnter total vertices: ";
    cin>>v;
    do{
        cout<<"\nEnter both vertices and cost: ";
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
        cout<<"\nWant to continue?[y/Y]";
        cin>>choice;     
    }while(choice=='Y' || choice=='y');
}
///////////////////////////////////////////////////////////////////////////////////
void DirAdj_List::DisplayList()
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
    DirAdj_List obj;
    int ch;
  do{
  cout<<"\n\nSelect: \n1] Create Adjacency List of Directed graph\n2] Display Adjacency List of Directed graph\n3] Exit\n";
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