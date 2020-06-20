///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader                                                   //
//Program  :Binary Search Tree                                                   //
//Language :C++  (Object Oriented Approach)                                      //
//Approach :Dynamic Approach using Linked Lists.                                 //
//Functions:To performs various operations on Binary Search Tree                 //
///////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////
class node
{
 public:
 int data;
 node* right;
 node* left;
}*root;
/////////////////////////////////////////////////////////////////////////////////////
class BST:public node
{
 static int ct,count;
 public:
 			BST()
 			{
 			 root=NULL;
 			}
 		    node* Create(int);
 			void Insert(node*,int);
 		
 			void PreOrder(node*);
 			void InOrder(node*);
 			void PostOrder(node*);
 		
 		    void MinNode(node*);
 			void MaxNode(node*);	
 			
 			void CopyTree(node*);
 			void SearchNode(node*,node*,int);
 			void MirrorTree(node*);
 				
 			int Depth(node*);
 			int TotNode(node*);
 		
};
int BST::ct=0;
int BST::count=0;
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
node* BST::Create(int no)
{
  node* newn=new node;
  newn->data=no;
  newn->right=NULL;
  newn->left=NULL;
  return newn;
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::Insert(node* temp,int no)
{
  if(root==NULL)
  {
   root=Create(no);
   cout<<"\nRoot Created successfully! ";
  }
  else
    if(no > temp->data)			//inserting no. greater than parent node in right subtree
    {
      if(temp->right==NULL)
      {
        temp->right=Create(no);			//***
      }
      else
      		Insert(temp->right,no);
    }
    else
    if(no < temp->data)			//inserting no. smaller than parent node in left subtree
    {
      if(temp->left==NULL)
      		temp->left=Create(no);			//***
      else
      		Insert(temp->left,no);
    }
    else 
    if(temp->data==no)			//if duplicate nodes are inserted
    {
      cout<<"Element already exits!!";
    }
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::PreOrder(node* temp)
{
 if(temp==NULL)
 		return;
 else
 {
 cout<<temp->data<<" ";
 count++;
 PreOrder(temp->left);
 PreOrder(temp->right);
}
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::InOrder(node* temp)
{
  if(temp==NULL)
 		return;
 else
 {
 InOrder(temp->left);
 cout<<temp->data<<" ";
 count++;
 InOrder(temp->right);
}
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::PostOrder(node* temp)
{
  if(temp==NULL)
 		return;
 else
 {
 PostOrder(temp->left);
 PostOrder(temp->right);
 cout<<temp->data<<" ";
 count++;
}
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::MinNode(node* temp)
{
 while(temp->left!=NULL)
 {
   temp=temp->left;
 }
 cout<<"\n\nMinimum element in BST: "<<temp->data<<" ";
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::MaxNode(node* temp)
{
  while(temp->right!=NULL)
 {
   temp=temp->right;
 }
 cout<<"\n\nMaximum element in BST: "<<temp->data<<" ";
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::CopyTree(node* temp)
{
  int disp;
  node* newTree=new node;
  newTree->data=root->data;
  newTree->left=root->left;
  newTree->right=root->right;
  cout<<"\nDisplay copy tree in:\n1] Preorder\n2]Postorder\n3]Inorder\n";
  cin>>disp;
  switch(disp)
  {
   case 1:
   				PreOrder(newTree);
   				break;
   case 2:
   				PostOrder(newTree);
   				break;
   case 3:
   				InOrder(newTree);
   				break;
  }
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::SearchNode(node* temp,node* parent,int no)
{
  if(temp->right==NULL && temp->left==NULL && temp->data!=no)
  		cout<<"Node not present in the tree!!";
  else 
  if(temp->data==no)
  {
   cout<<"Element is present at level: "<<ct;
   
   if(parent->data==temp->data)			//ocuur when root and desired element is same
   		cout<<"\nParent node of eement is root itself!";
   else
   if(parent!=NULL)
   		cout<<"\nParent node of "<<no<<" is "<<parent->data;
   ct=0;
  }
  else
  if(no > temp->data)							//search in right sub-tree
  {
   ct++;
   SearchNode(temp->right,temp,no);
  }
  else
  if(no < temp->data)						//search in left sub-tree
  {
   ct++;
   SearchNode(temp->left,temp,no);
  }
}
/////////////////////////////////////////////////////////////////////////////////////
void BST::MirrorTree(node* temp)
{
 int disp;
 node* temp1;
 if(temp!=NULL)
  {
  temp1=temp->left;
  temp->left=temp->right;
  temp->right=temp1;
  
  MirrorTree(temp->left);
  MirrorTree(temp->right);
  }
  cout<<"\nDisplay mirror tree in:\n1] Preorder\n2]Postorder\n3]Inorder\n";
  cin>>disp;
  switch(disp)
  {
   case 1:
   				PreOrder(temp);
   				break;
   case 2:
   				PostOrder(temp);
   				break;
   case 3:
   				InOrder(temp);
   				break;
  }
}
/////////////////////////////////////////////////////////////////////////////////////
int BST::Depth(node* temp)
{
  int h1=0,h2=0;
  if(temp==NULL)
  		return 0;
  else
  if(temp->right==NULL && temp->left==NULL)
  		return 0;
  		
   h1=Depth(temp->left);
   h2=Depth(temp->right);
   
   if(h1>h2)
   		return h1+1;
   else
   		return h2+1;
}
/////////////////////////////////////////////////////////////////////////////////////
int BST::TotNode(node* temp)
{
  return count;
}
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
 BST obj;
 int ch,ch1,val,n;
 do{
 cout<<"\n\n1] Insert\n2] Display\n3] Get Max value node\n4] Get Min value node\n5] Total no of nodes\n6] Search particular node\n7] Get Max Depth of BST\n8] Create copy tree of existing BST\n9] Create mirror tree of existing BST\n10] Delete Binary Search Tree\n11] Exit\n";
 cin>>ch;
 switch(ch)
 {
  case 1:
  		cout<<"\nEnter element: ";
  		cin>>val;
  		obj.Insert(root,val);
  		break;
  case 2:
  		cout<<"\n\tWhich Traversal method:\n1] Inorder\n2] PreOrder\n3] PostOrder\n";
  		cin>>ch1;
  		cout<<"\n";
  		switch(ch1)
  		{
  		 case 1:
  		 		obj.InOrder(root);
  		 		break;
  		 case 2:
  		 		obj.PreOrder(root);
  		 		break;
  		 case 3:
  		 		obj.PostOrder(root);
  		 		break;
  		}
  		break;
  case 3:
  		obj.MaxNode(root);
  		break;
  case 4:
  		obj.MinNode(root);
  		break;
  case 5:
  		cout<<"\nTotal no. of elements present in BST: "<<obj.TotNode(root);
  		break;
  case 6:
  		cout<<"\nEnter element to be serached: ";
  		cin>>n;
  		obj.SearchNode(root,root,n);
  		break;
  case 7:
  		cout<<"\nDepth of BST is: "<<obj.Depth(root);
  		break;
  case 8:
  		obj.CopyTree(root);
  		break;
  case 9:
  		obj.MirrorTree(root);
  		break;
  case 10:
  		delete root;
  		break;
  case 11:
  		return 0;
  default:
  		cout<<"\nPlease enter correct choice!!";
 }
 }while(1);
}
//////////////////////////////////////////////////////////////////////////////////
//End of Program
//////////////////////////////////////////////////////////////////////////////////