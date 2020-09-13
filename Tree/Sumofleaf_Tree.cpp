//Given a Binary Tree of size N. The task is to complete the function sumLeaf(), that should return the sum of all the leaf nodes of the given binary tree.

int sumLeaf(Node* root)
{
    if(root==NULL)  return 0;
    int sum=0;
    Node* temp=root;
    if(temp->right==NULL && temp->left==NULL)
    return temp->data;
    return sumLeaf(temp->left)+sumLeaf(temp->right);
}