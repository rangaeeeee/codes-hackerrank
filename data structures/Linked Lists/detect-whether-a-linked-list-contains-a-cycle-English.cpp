/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node *slow = head;
    Node *fast = head;
    bool loop = false;
    
    if(head == NULL || head->next == NULL)
        return loop;    
    
    slow = slow->next;
    fast = fast->next->next;
    
    while(slow->next != NULL && fast->next != NULL && fast->next->next != NULL) {
        
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast) {
            loop = true;
            break;
        }
            
    }
    return loop;
}