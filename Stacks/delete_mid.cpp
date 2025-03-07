#include<iostream>
#include<stack>
using namespace std;

void process(stack<int> &st, int size, int c){
    if(c == size/2){
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    process(st, size, ++c);
    st.push(temp);
}

void del_mid(stack<int> &st, int size){
    int c = 0;
    process(st, size, c);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int size = st.size();

    del_mid(st, size);
    while(!st.empty()){
        cout<<st.top()<<", ";
        st.pop();
    }
    cout<<endl;
}






// https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246
// #include <bits/stdc++.h> 

// void process(stack<int> &st, int N, int c){
//    if(c == N/2){
//       st.pop();
//       return;
//    }
//    int t = st.top();
//    st.pop();
//    process(st, N, ++c);
//    st.push(t);
// }
// void deleteMiddle(stack<int>&st, int N){
//    // Write your code here
//    process(st, N, 0);
   
// }