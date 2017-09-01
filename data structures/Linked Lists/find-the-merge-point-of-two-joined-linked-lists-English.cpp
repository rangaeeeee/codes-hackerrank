/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
    #include <vector>
    
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    if(headA == NULL || headB == NULL || headA->next == NULL || headB->next == NULL)
        return 0;    
  
    
 
    Node *currA = headA, *currB = headB;
    int lengthA = 0, lengthB = 0;
    
    while(currA != NULL){
        lengthA++;
        currA = currA->next;
    }
    
    while(currB != NULL){
        lengthB++;
        currB = currB->next;
    }
    
//  cout << " length A : " << lengthA << endl;
//    cout << " length B : " << lengthB << endl;
    
    //reset the curr pointer 
    currA = headA;
    currB = headB;
    
    if(lengthA > lengthB){
        int diff = lengthA - lengthB;
        for(int i = 0;i<diff;i++){
            currA = currA->next;
        }
        
        for(int i = 0;i<lengthB;i++){
            if(currA == currB)
                return currA->data;
            currA = currA->next;
            currB = currB->next;
        }
    }
    else if(lengthB > lengthA){
        int diff = lengthB - lengthA;
        for(int i = 0;i<diff;i++){
            currB = currB->next;
        }
        
        for(int i = 0;i<lengthA;i++){
            if(currA == currB)
                return currB->data;
            currA = currA->next;
            currB = currB->next;
        }
    }
    else{
        for(int i = 0;i<lengthA;i++){
            if(currA == currB)
                return currB->data;
            currA = currA->next;
            currB = currB->next;
        }
    }    
    
    return 0;
}