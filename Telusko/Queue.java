public class Queue{
    int arr[] = new int[5];
    int rear = -1;
    int front = 0;
    int size = 0;
    
    // public Queue(){
    //     size = arr.length - 1;
    // }

    public void enqueue(int data){
        if(isFull()){
            System.out.println("...Queue OverLoaded...");
            return;
        }
        rear = (rear + 1) % 5;
        arr[rear] = data;
        size++;
    }

    public int dequeue(){
        if(isEmpty()){
            System.out.println("...Queue UnderFlow...");
            return -1;
        }
        int data = arr[front];
        System.out.println(data);
        front = (front + 1) % 5;
        size--;
        return data;
    }

    public int peek(){
        System.out.println(arr[front]);
        return arr[front];
    }

    public boolean isFull(){
        return size==5;
    }

    public boolean isEmpty(){
        return size==0;
    }

    public void Display(){
        for(int i=0; i<size; i++){
            System.out.println(arr[(front + i) % 5]);
        }
        
    }
    public static void main(String[] args) {
        Queue queue = new Queue();
        queue.enqueue(1);
        queue.enqueue(2);
        queue.enqueue(3);
        queue.enqueue(4);
        queue.enqueue(5);
        queue.dequeue();
        queue.enqueue(10);
        queue.dequeue();
        queue.enqueue(111);
        System.out.println();
        queue.Display();
        
    }
}