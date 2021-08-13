///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader                                                   //
//Program  :Graph: Directed Adjacency Matrix                                     //
//Language :C++  (Object Oriented Approach)                                      //
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#define MAX 50
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
class DirAdj_Matrix
{
    int v,v1,v2,flag,cost;
    int G[MAX][MAX];
    public:
            //constructor: initializing the member variables
            DirAdj_Matrix()
            {
                v=v1=v2=0;
            
                for(int i=0;i<MAX;i++)
                {
                    for(int j=0;j<MAX;j++)
                    {
                        G[i][j]=0;
                    }
                }
            }
            void CreateMatrix();
            void DisplayMatrix();
};

///////////////////////////////////////////////////////////////////////////////////
void DirAdj_Matrix::CreateMatrix()
{
    char choice;
    cout<<"\nEnter total number of vertices: ";
    cin>>v;
    do{
        cout<<"\nEnter edges: (both vertices): ";
        cin>>v1>>v2;
        cout<<"\nEnter cost: ";
        cin>>cost;
        if(v1>= v|| v2>=v)
        {
            cout<<"\nEdge not Valid";
            continue;
        }
        G[v1][v2]=cost;

        cout<<"\nWant to continue? [y/Y]";
        cin>>choice;

    }while(choice=='y' || choice=='Y');
}
///////////////////////////////////////////////////////////////////////////////////
void DirAdj_Matrix::DisplayMatrix()
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<G[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
///////////////////////////////////////////////////////////////////////////////////
int main()
{
  DirAdj_Matrix obj;
  int ch;
  do{
  cout<<"\n\nSelect: \n1] Create Adjacency Matrix of Undirected graph\n2] Display Adjacency Matrix of Undirected graph\n3] Exit\n";
  cin>>ch;
  switch(ch)
  {
   case 1:
            obj.CreateMatrix();
            break;
   case 2:
            obj.DisplayMatrix();
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
//End of program
///////////////////////////////////////////////////////////////////////////////////1