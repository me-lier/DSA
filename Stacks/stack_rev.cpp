#include<iostream>
#include<stack>
using namespace std;

void rev(stack<int> &st){ //without recursion...... extra space.........
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    st = temp;
}


// with recursion.......

void insertAtBottom(stack<int> &st, int data){
    if(st.empty()){
        st.push(data);
        return;
    }
    int t = st.top();
    st.pop();
    insertAtBottom(st, data);
    st.push(t);
}

void rev_rec(stack<int> &st){
    if(st.empty()){
        return;
    }
    int t = st.top();
    st.pop();
    rev_rec(st);
    insertAtBottom(st, t);
}


int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    rev_rec(st);
    while(!st.empty()){
        cout<<st.top()<<", ";
        st.pop();
    }
}






// https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875
// void insertAtBottom(stack<int> &stack, int x){
//     if(stack.empty()){
//         stack.push(x);
//         return;
//     }
//     int n = stack.top();
//     stack.pop();
//     insertAtBottom(stack, x);
//     stack.push(n);

// }
// void reverseStack(stack<int> &stack) {
//     // Write your code here
//     if(stack.empty()){
//         return;
//     }
//     int n = stack.top();
//     stack.pop();
//     reverseStack(stack);
//     insertAtBottom(stack, n);
// }