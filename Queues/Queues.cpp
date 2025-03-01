#include<iostream>
using namespace std;

class Queue{
public:
int *arr;
int size;
int front;
int rear;

    Queue(int size){
        size = size;
        arr = new int[size];
        front  = 0;
        rear = 0;
    }

    bool is_Empty(){
        return front == rear;
    }

    bool is_Full(){
        return rear == size;
    }

    void push(int data){
        if(!is_Full()){
            arr[rear++] = data;
            return;
        }
        cout<<"Queue is Full"<<endl;
    }

    int pop(){
        if(!is_Empty()){
            int t = arr[front];
            arr[front] = -1;
            front++;
            if(is_Empty()){
                front = 0;
                rear = 0;
            }
            return t;
        }
        return -1;
    }
    int peek(){
        if(!is_Empty()){
            return arr[front];
        }
        return -1;
    }

    void display(){
        for(int i = front+1; i<=rear; i++){
            cout<<arr[i]<<", ";
        }
        cout<<endl;
    }
};

class CircularQueue {
    public:
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int n) {
        // Initialize the data structure
        this->size = n;
        this->arr = new int[size];
        this->front = -1;
        this->rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed, false otherwise.
    bool enqueue(int value) {
        // Check if the queue is full
        if ((rear + 1) % size == front) {
            return false;
        }

        // If the queue is empty
        if (front == -1) {
            front = 0;
        }

        // Move rear to the next position and insert the value
        rear = (rear + 1) % size;
        arr[rear] = value;
        return true;
    }

    // Dequeues the front element. Returns -1 if the queue is empty.
    int dequeue() {
        // Check if the queue is empty
        if (front == -1) {
            return -1;
        }

        int result = arr[front];

        // If there's only one element, reset the queue
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            // Move front to the next position
            front = (front + 1) % size;
        }

        return result;
    }
};

int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.display();
}