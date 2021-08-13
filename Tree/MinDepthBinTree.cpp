// Given a binary tree, find its minimum depth.

/*You are required to complete this method*/
int minDepth(Node *node) {
    //empty tree
    if(node == NULL)    return 0;
    
    //single node i.e root
    if(node->left==NULL && node->right==NULL)   return 1;
    
    //more than one node
    if(node->left && node->right)
        return 1+min(minDepth(node->left),minDepth(node->right));
    else if(node->left) 
        return 1+minDepth(node->left);
    else
        return 1+minDepth(node->right);
}