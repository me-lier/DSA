#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node();
    Node(int data){
        this->data = data;
    }
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }

    ~Node(){
        // int data = this->data;

        // if(this->next!=NULL){
        //     delete next;
        //     next=NULL;
        // }

        cout<<"Memory is free for Node with data :-> "<<this->data<<endl;
    }
};

void insertAtHead(Node* &tail, Node* &head, int data){
    Node* nn = new Node(data);
    if(head == NULL){
        head = tail = nn;
        nn->next = nn;
        return;
    }

    tail->next = nn;
    nn->next = head;
    head = nn;
}

void insertAtTail(Node* &tail, Node* &head, int data){
    Node* nn = new Node(data);
    if(head == NULL){
        insertAtHead(tail, head, data);
    }

    tail->next = nn;
    nn->next = head;
    tail = nn;
}

void insertAtPosition(Node* &tail, Node* &head, int data, int pos){
    if(head == NULL || pos==1){
        insertAtHead(tail, head, data);
        return;
    }
    Node* temp = head;
    if(pos>2){
        temp=temp->next;
        pos--;
    }
    while(temp != head && pos > 2){
        pos--;
        temp = temp->next;
    }

    if(temp == head && pos>2){
        insertAtTail(tail, head, data);
        return;
    }
    Node* nn = new Node(data);
    nn->next = temp->next;
    temp->next = nn;

}

void deleteAtHead(Node* &tail, Node* &head){
    Node* temp = head;
    head = head->next;
    tail->next = head;
}

void deleteAtTail(Node* &head, Node* &tail){
    if(head ==  NULL){
        return;
    }
    if(head == tail){
        delete tail;
        head = tail = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    temp->next = head;
    // tail->next = NULL;
    delete tail;
    tail=temp;
}

void deleteAtValue(Node*& tail, Node*& head, int data){
    if(head->data == data){
        deleteAtHead(tail, head);
    }
}

void print(Node* &head){
    Node* temp = head;
    cout<<temp->data<<"->";
    temp = temp->next;
    while(temp != head){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(tail, head, 1);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    insertAtHead(tail, head, 2);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    insertAtTail(tail, head, 3);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    print(head);
    insertAtPosition(tail, head, 5, 2);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    print(head);
    // deleteAtHead(tail, head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    // print(head);
    deleteAtTail(tail, head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    print(head);
}
    