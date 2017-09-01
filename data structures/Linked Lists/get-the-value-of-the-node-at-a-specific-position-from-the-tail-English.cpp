/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *ref = head;
    int n = 0;
    
    while(head->next != NULL)
        {
        n++;
        head = head->next;
    }
    
    head = ref;
    
    for(int i =positionFromTail; i < n;i++,head= head->next)
        ;
    return head->data;
}