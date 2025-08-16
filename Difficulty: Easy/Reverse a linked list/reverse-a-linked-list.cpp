/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        Node* prev = NULL;
        Node* curr = head;

        while (curr != NULL) {
            Node* nextNode = curr->next; 
            curr->next = prev;          
            prev = curr;                
            curr = nextNode;            
        }

        return prev; 
        
    }
};