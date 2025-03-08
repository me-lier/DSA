#include<iostream>
using namespace std;

class Stack{
    public:
    int max_size, top, *arr;
    Stack(int n){
        max_size = n;
        arr = new int[n];
        top = -1;
    }

    ~Stack() {  // Destructor to free memory
        delete[] arr;
    }
    
    bool isempty(){
        return top == -1;
    }

    bool isfull(){
        return top + 1 >= max_size; 
    }

    void push(int data){
        if(!isfull()) arr[++top] = data;
    }

    int pop(){
        if(!isempty()) return arr[top--];
        return -1;
    }

    int peek(){
        if(!isempty()) return arr[top];
        return -1;
    }
};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
}