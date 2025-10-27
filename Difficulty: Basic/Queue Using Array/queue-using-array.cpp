class myQueue {
    int *arr;
    int front, rear, size, capacity;

public:
    // Constructor
    myQueue(int n) {
        capacity = n;
        arr = new int[n];
        front = 0;
        rear = -1;
        size = 0;
    }

    // Check if queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Check if queue is full
    bool isFull() {
        return size == capacity;
    }

    // Add element to rear
    void enqueue(int x) {
        if (isFull()) return; // no print statements on GFG
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }

    // Remove element from front
    void dequeue() {
        if (isEmpty()) return;
        front = (front + 1) % capacity;
        size--;
    }

    // Get front element
    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    // Get rear element
    int getRear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }
};
