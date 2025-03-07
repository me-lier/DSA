#include<iostream>
using namespace std;

void insertAtPos(stack<int> &st, int data){
    if(st.empty() || st.top() <= data){ // by changing this we can reverse the whole sorted order.....
        st.push(data);
        return;
    }
    int t = st.top();
    st.pop();
    insertAtPos(st, data);
    st.push(t);
}

void sort(stack<int> &st){
    if(st.empty()) return;
    int t = st.top();
    st.pop();
    sort(st);
    insertAtPos(st, t);
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(1);
    st.push(6);
    st.push(4);

    sort(st);
    while(!st.empty()){
        cout<<st.top()<<", ";
        st.pop();
    }
}



// https://www.naukri.com/code360/problems/sort-a-stack_985275
// #include <bits/stdc++.h>

// void insert(stack<int>&stack, int n){
// 	if(stack.empty() || stack.top() <= n){
// 		stack.push(n);
// 		return;
// 	}else{
// 		int x = stack.top();
// 		stack.pop();
// 		insert(stack, n);
// 		stack.push(x);
// 		return;
// 	}
// }

// void sortStack(stack<int> &stack)
// {
// 	// Write your code here
// 	if(stack.empty()){
// 		return;
// 	}
// 	int n = stack.top();
// 	stack.pop();
// 	sortStack(stack);
// 	insert(stack, n);
// }