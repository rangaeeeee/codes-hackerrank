
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
   if (root == NULL)
       return -1 ;
    
    int lDepth = height(root->left);
    int rDepth = height(root->right);
    
    int i = max(lDepth,rDepth);
  //  cout << "i : " << i << endl;
    
    return i + 1;
}