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
    Node* sortedMerge(Node* head1, Node* head2) {
        vector<int> arr;
        Node* temp1 = head1;
        while(temp1!=NULL){
            arr.push_back(temp1->data);
            temp1=temp1->next;
        }
        Node* temp2 = head2;
        while(temp2!=NULL){
            arr.push_back(temp2->data);
            temp2=temp2->next;
        }
        sort(arr.begin(),arr.end());
        
        Node* dummy=new Node(-1);
        Node* curr=dummy;
        
        for(int i=0;i<=arr.size()-1;i++){
            curr->next = new Node(arr[i]);
            curr = curr->next; 
        }
        
        return dummy->next;
    }
};