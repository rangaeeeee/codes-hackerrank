/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    
      Node *newNode;
  newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  Node *temp = head;

  if(head == NULL)
  {   
      return newNode;
  }
  else
  {
     while(head->next != NULL)
         head = head->next;

     head->next = newNode;
  
  }
  
  return temp;


}