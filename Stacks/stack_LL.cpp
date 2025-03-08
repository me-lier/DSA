#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){}
    Node(int d){
        data = d;
    }

    ~Node(){
        delete next;
    }
};

class Stack{
    public:
    Node* root;
    int max_size, top;
    Stack(int n){
        max_size = n;
        top = -1;
        root = NULL;
    }

    ~Stack(){
        delete root;
    }

    bool isempty(){
        return root == NULL;
    }

    bool isfull(){
        return top + 1 == max_size;
    }
    void push(int data){
        Node* nn = new Node(data);
        if(isempty()){
            root = nn;
            top++;
            return;
        }
        if(!isfull()){
            nn->next = root;
            root = nn;
            top++;
            return;
        }
    }

    int pop(){
        if(!isempty()){
            int t = root->data;
            root = root->next;
            top--;
            return t;
        }
        return -1;
    }

    int peek(){
        if(!isempty()){
            return root->data;
        }
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
    cout<<st.pop();
}