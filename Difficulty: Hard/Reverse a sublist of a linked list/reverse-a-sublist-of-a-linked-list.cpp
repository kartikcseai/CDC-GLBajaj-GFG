class Solution {
public:
    Node* reverseBetween(int a, int b, Node* head) {
        vector<int> arr;
        Node* temp = head;
        while (temp != NULL) {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        int i = a - 1;
        int j = b - 1;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        Node* dummy = new Node(arr[0]);
        Node* curr = dummy;
        for (int k = 1; k < arr.size(); k++) {
            curr->next = new Node(arr[k]);
            curr = curr->next;
        }

        return dummy;  
    }
};
