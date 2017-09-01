/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *temp = head;
    

  if(position == 0) {
      return head->next;

  }
    
  for(int i = 0 ; i < position - 1 ; i++)
  {
      head = head->next;

  }

  
  head->next = head->next->next;
  return temp;


}