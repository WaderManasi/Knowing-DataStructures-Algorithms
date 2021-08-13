//Given a binary tree, find its level order traversal.
//Level order traversal of a tree is breadth-first traversal for the tree.

vector<int> levelOrder(Node* root)
{
    vector<int>v;
    if(root==NULL)  return v;
    
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty())
    {
        Node* temp=q.front();
        v.push_back(temp->data);
        q.pop();
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        
    }
    return v;
}