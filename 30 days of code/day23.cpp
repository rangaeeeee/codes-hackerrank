#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

int getHeight (Node* root)	{
    if(root == NULL)
        return -1;
    
    int height = 0;
    
    height = max(getHeight(root->left),getHeight(root->right));
    
    return height +1;
}
void levelOrderPrint(Node * root,int level){
     if(root == NULL)
        return;
    if(level == 1)
    cout << root->data <<" ";
    else if(level > 1){
         levelOrderPrint(root->left,level - 1);
       levelOrderPrint(root->right,level - 1);
    }
  

 
}
void levelOrder(Node * root){
      //Write your code here  
  	
      int height = 0;
        height = getHeight(root);
    for(int i =1;i<=height+1;i++) {
        levelOrderPrint(root,i);        
    }
        
   // cout << "height  :" << height << endl;
    
   
	}

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}

