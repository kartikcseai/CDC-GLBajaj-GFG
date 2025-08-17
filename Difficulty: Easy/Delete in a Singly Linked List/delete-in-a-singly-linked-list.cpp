/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x==1){
            head=head->next;
            return head;
        }
        else {
            Node* temp=head;
            for(int i=1;i<x-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            return head;
        }
        
    }
};