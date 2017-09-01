/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *curr = head,*next;
    
    if(head == NULL) {
        return NULL;
    }
    
    if(head->next == NULL) {
        return head;
    }
    
    
    curr = head->next;
    if(curr->next == NULL)
        {
        if(head->data == curr->data)
            return curr;
        else
            return head;
    }
    next = curr->next;
    
    
    while(curr->next != NULL) {        
        if(curr->data == curr->next->data) {
      
            next = curr->next->next;
            curr->next = next;
            
            
        }
        else
        {
            curr = curr->next;
          //  head = head->next;
        }            
        
    }
    
    if(head->data == head->next->data)
        return head->next;
    
    return head;
}