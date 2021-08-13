//Calculate height of BST
//solution
int height(Node* root)
{
  if(root==NULL)
  return 0;
  
  int h1=height(root->left);
  int h2=height(root->right);
  
  return max(h1,h2) + 1;
}