class Node{
    int data;
    Node next;

    public Node(){}
    
    public Node(int data){
        this.data = data;
        next = null;
    }
}
public class LinkedList{
    Node head;
    public void add(int data){
        Node newNode = new Node(data);
        if(head == null){
            head = newNode;
            return;
        }
        Node temp = head;
        while(temp.next!=null){
            temp = temp.next;
        }
        temp.next = newNode;
    }

    public void delete(){
        Node temp = head;
        while(temp.next.next!=null){
            temp = temp.next;
        }
        temp.next = null;
    }

    public void InsertAt(int pos, int data){
        Node newNode = new Node(data);
        Node temp = head;
        while(pos > 2 && temp.next != null){
            pos--;
            temp = temp.next;
        }
        Node t = temp.next;
        temp.next = newNode;
        newNode.next = t;
    }

    public void DeleteAt(int pos){
        Node temp = head;
        while(pos > 2 && temp.next != null){
            pos--;
            temp = temp.next;
        }
        temp.next = temp.next.next;
    }

    public void peek(){
        Node temp = head;
        while(temp.next != null){
            temp = temp.next;
        }
        System.out.println(temp.data);
    }

    public void first(){
        System.out.println(head.data);
    }

    public void Reverse(){ //pending...

    }

    public void AddFirst(int data){
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }

    public void Display(){
        Node temp = head;
        while(temp != null){
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);
        list.add(6);
        list.InsertAt(3, 9);
        list.DeleteAt(3);
        list.peek();
        list.first();
        list.delete();
        System.out.println();
        list.AddFirst(10);
        list.Display();
    }
}