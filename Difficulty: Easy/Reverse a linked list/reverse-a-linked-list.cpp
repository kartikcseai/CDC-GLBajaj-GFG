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
    Node* reverseList(Node* head) {
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        int x=arr.size()-1;
        int i=0;
        while(x>i){
            swap(arr[i],arr[x]);
            i++;
            x--;
        }
        
        Node* dummy = new Node(arr[0]);
        Node* current = dummy;
    
        for (int i = 1; i < arr.size(); i++) {
            current->next = new Node(arr[i]);
            current = current->next;
        }
    
        return dummy;
    }
};