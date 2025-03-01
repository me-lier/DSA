#include<iostream>
using namespace std;

class Stack{
public:
    int size;;
    int top;
    int *a;
    Stack(int n){
        size = n;
        top = -1;
        a = new int[size];
    }

    bool is_Empty(){
        return top == -1;
    }
    bool is_Full(){
        return top == size - 1;
    }
    void push(int x){
        if(is_Full()){
            cout<<"Stack is Overflow"<<endl;
            return;
        }
        a[++top] = x;
    }

    int pop(){
        if(is_Empty()){
            cout<<"Stack is Underflow"<<endl;
            return -1;
        }
        return a[top--];
    }
    int peek(){
        if(is_Empty()){
            cout<<"Stack is Empty"<<endl;
        }
        return a[top];
    }

};

int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    return 0;
}