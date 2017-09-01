
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

int depth(node *head) {
    int height = 0;
    if(head == NULL)
        return 0;
    
    height = max(depth(head->left),depth(head->right));
    
    return (height+1);
}

void eachlevel(node *Node, int level){
    if(Node == NULL)
        return;
    if(level == 1)
        cout << Node->data << " ";
    else if (level > 1)
        {
        eachlevel(Node->left,level-1);
        eachlevel(Node->right,level-1);
    }
}

void LevelOrder(node * root)
{
   int height = depth(root);
    
  //  cout << "height : "<< height << endl; 
    
    for(int level =0; level<= height; level++){
        eachlevel(root,level);
    }
  
}