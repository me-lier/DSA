public class Stack{
    int[] arr = new int[5];
    int top = -1;
    int size;

    public Stack(){
        size = arr.length - 1;
    }

    public void push(int data){
        if(top > size - 1){
            System.out.println("...Stack OverFlow...");
            return;
        }
        arr[++top] = data;
    }

    public int peek(){
        if(top == -1){
            System.out.println("...Stack is Empty...");
            return -1;
        }
        System.out.println(arr[top]);
        return arr[top];
    }

    public int pop(){
        if(top < 0){
            System.out.println("...Stack UnderFlow...");
            return -1;
        }
        System.out.println(arr[top]);
        return arr[top--];
    }

    public void Display(){
        for(int ele : arr){
            System.out.print(ele + ", ");
        }
    }

    public static void main(String[] args) {
        Stack stack = new Stack();
        stack.push(1);
        stack.push(1);
        stack.push(1);
        stack.push(1);
        stack.push(1);
        stack.push(1);
        stack.Display();
        
    }
}