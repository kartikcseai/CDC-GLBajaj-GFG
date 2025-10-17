class myStack {
    int *arr;
    int top;
    int capacity;

public:
    myStack(int n) {
        capacity = n;
        arr = new int[n];
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == capacity - 1);
    }

    void push(int x) {
        if (!isFull()) {
            top++;
            arr[top] = x;
        }
    }

    void pop() {
        if (!isEmpty()) {
            top--;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        return -1;
    }
};
