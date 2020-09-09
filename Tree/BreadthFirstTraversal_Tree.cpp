///////////////////////////////////////////////////////////////////////////////////
//Name     :Manasi Mohan Wader                                                   //
//Program  :Breadth First Traversal in Binary Search Tree/level order display    //                                              //
//Language :CPP (Object Oriented Approach)                                       //
//Approach :Dynamic Approach using Linked Lists.                                 //
///////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
#include<queue>
//standard library
using namespace std;
class Node
{
    public:
        int data;
        Node* right;
        Node* left;
        Node(int x)
        {
            data=x;
            right=NULL;
            left=NULL;
        }
}*root;
class BST
{
    int ct;
    public:
            BST()
            {
                ct=0;
            }
            void Create(Node* root,int data);
            void BFS(Node* root);  
};
void BST::Create(Node* temp,int x)
{
    Node* newn=new Node(x);
    
    if(root==NULL)  
    {
        root=newn;
        cout<<"\nRoot inserted!\n";
    }
    else
    {
        if(x<temp->data)
        {
            while(temp->left!=NULL)
            temp=temp->left;
            temp->left=newn;
        }
        else if(x>temp->data)
        {
            while(temp->right!=NULL)
            temp=temp->right;
            temp->right=newn;
        }
    }

}
void BST::BFS(Node* temp)
{
    if(root==NULL)  return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        cout<<temp->data<<" ";
        ct++;
        q.pop();
         if(temp->left!=NULL)   q.push(temp->left);
        if(temp->right!=NULL)   q.push(temp->right);
       
    }

    cout<<"\n\nTotal no. of nodes in tree: "<<ct<<"\n";
}
int main()
{
   BST obj;
   cout<<"\nDisplaying  tree elements using BFS: Breadth First Traversal";
   obj.Create(root,10);
   obj.Create(root,5);
   obj.Create(root,3);
   obj.Create(root,15);
   obj.BFS(root);
   cout<<endl;
   return 0;
}
