/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
  public:
    int sz;
    Node* head=NULL;
    Node* tail=NULL;
    myStack() {
        sz=0;
        head=NULL;
        tail=NULL;
    }

    bool isEmpty() {
        return sz==0;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        if(head==NULL) head=tail=newNode;
        else{
            newNode->next=head;
            head=newNode;
        }
        sz++;
    }

    void pop() {
        if(head==NULL) return;
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        sz--;
    }

    int peek() {
        if(head==NULL) return -1;
        return head->data;
    }

    int size() {
        return sz;
    }
};