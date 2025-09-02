/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        if(k>arr.size()) return head;
        
        swap(arr[k-1],arr[arr.size()-k]);
        
        Node* dummy=new Node(arr[0]);
        Node* curr=dummy;
        for(int i=0;i<arr.size();i++){
            curr->next=new Node(arr[i]);
            curr=curr->next;
        }
        return dummy->next;
    }
};