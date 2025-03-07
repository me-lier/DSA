#include<iostream>
#include<stack>
using namespace std;

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

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    insertAtBottom(st, 0);
    while(!st.empty()){
        cout<<st.top()<<", ";
        st.pop();
    }
}







// https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
// #include <bits/stdc++.h> 
// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     // Write your code here.
//     if(myStack.empty()){
//         myStack.push(x);
//         return myStack;
//     }
//     int n = myStack.top();
//     myStack.pop();
//     pushAtBottom(myStack, x);
//     myStack.push(n);
//     return myStack;
// }
