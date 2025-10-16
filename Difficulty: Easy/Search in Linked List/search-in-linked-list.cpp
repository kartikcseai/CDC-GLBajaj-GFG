/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        bool flag=false;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                flag=true;
            }
            temp=temp->next;
        }
        if(flag==true) return true;
        else return false;
        
    }
};
