/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view_left(node * root) {
     if(root == NULL)
        return ;
    
    top_view_left(root->left);
    cout << root->data << " ";
    
}

void top_view_right(node * root) {
    if(root == NULL)
        return ;    
    
    cout << root->data << " ";
    top_view_right(root->right);
    
}

void top_view(node * root)
{
    top_view_left(root);
    top_view_right(root->right);  
}