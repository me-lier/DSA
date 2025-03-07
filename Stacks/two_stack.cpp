#include<iostream>
using namespace std;

class Stack{
    public:
    int max_size;
    int* arr;
    int top1;
    int top2;

    Stack();

    Stack(int n){
        this->max_size = n;
        this->arr = new int[n];
        this->top1 = -1;
        this->top2 = n;
    }

    bool isEmpty1(){
        return top1 == -1;
    }

    bool isEmpty2(){
        return top2 == max_size;
    }

    bool isFull1(){
        return top1+1 == top2; 
    }

    bool isFull2(){
        return top2-1 == top1;
    }

    void push1(int data){
        if(!isFull1()){
            arr[++top1] = data;
        }else{
            cout<<"Stack is Overflow"<<endl;
        }
    }

    void push2(int data){
        if(!isFull2()){
            arr[--top2] = data;
        }else{
            cout<<"Stack is Overflow"<<endl;
        }
    }

    int pop1(){
        if(!isEmpty1()){
            return arr[top1--];
        }
        return -1;
    }

    int pop2(){
        if(!isEmpty2()){
            return arr[top2++];
        }
        return -1;
    }
    void display(){
        for(int i = 0; i < max_size; i++){
            cout<<arr[i]<<", ";
        }
        cout<<endl;
    }
};

int main(){

    Stack two(8);
    two.push1(1);
    two.push2(2);
    two.push1(3);
    two.push2(4);
    two.push1(5);
    two.push2(6);
    two.push1(7);
    two.push2(8);
    two.push1(9);
    two.push2(10);
    two.display();
    for(int i = 1; i <= 8; i++){
        if(i%2==0) cout<<two.pop1()<<endl;
        else cout<<two.pop2()<<endl;
    }


}
// https://www.naukri.com/code360/problems/two-stacks_983634
// #include <bits/stdc++.h> 
// class TwoStack {

// public:
//     int* arr;
//     int max_size, top1, top2;

//     // Initialize TwoStack.
//     TwoStack(int s) {
//         // Write your code here.
//         this->arr = new int[s];
//         this->max_size = s;
//         this->top1 = -1;
//         this->top2 = s;
//     }
//     bool isEmpty1(){
//         return top1 == -1;
//     }

//     bool isEmpty2(){
//         return top2 == max_size;
//     }

//     bool isFull1(){
//         return top1+1 == top2;
//     }

//     bool isFull2(){
//         return top2-1 == top1;
//     }
    
//     // Push in stack 1.
//     void push1(int num) {
//         // Write your code here.
//         if(!isFull1()){
//             arr[++top1] = num;
//         }

//     }

//     // Push in stack 2.
//     void push2(int num) {
//         // Write your code here.
//         if(!isFull2()){
//             arr[--top2] = num;
//         }
//     }

//     // Pop from stack 1 and return popped element.
//     int pop1() {
//         // Write your code here.
//         if(!isEmpty1()){
//             return arr[top1--];
//         }
//         return -1;
//     }

//     // Pop from stack 2 and return popped element.
//     int pop2() {
//         // Write your code here.
//         if(!isEmpty2()){
//             return arr[top2++];
//         }
//         return -1;
//     }
// };
