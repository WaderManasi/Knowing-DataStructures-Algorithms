//solution :to create mirror tree of given bst

void mirror(Node* temp) 
{
 Node* temp1;
 if(temp!=NULL)
  {
  temp1=temp->left;
  temp->left=temp->right;
  temp->right=temp1;
  
  mirror(temp->left);
  mirror(temp->right);
  }
}