#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    Node();
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int data = this->data;
        delete this->next;
        cout<<"Node with data "<<data<<" is deleted"<<endl;
    }
};

void insertAtHead(Node* &head, Node* &tail,int data){
    Node* nn = new Node(data);
    if(head == NULL){
        head = nn;
        tail = head;
        return;
    }
    nn->next = head;
    head->prev = nn;
    head = nn;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    Node* nn = new Node(data);
    if(head == NULL){
        head = nn;
        tail = head;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = nn;
    nn->prev = temp;
    tail = nn;
    
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int data){
    Node* nn = new Node(data);
    if(pos == 1){
        insertAtHead(head, tail, data);
        return;
    }
    Node* curr = head;

    while(curr->next != NULL && pos>2){
        curr = curr->next;
        pos--;
    }
    if(curr->next == NULL){
        tail = nn;
    }
    nn->prev =curr;
    nn->next = curr->next;
    curr->next = nn;
    
}

void deleteAtHead(Node* &head, Node* &tail){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
}

void deleteAtTail(Node* &head, Node* &tail){
    if(head == NULL){
        return;
    }
    Node* temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
}

void deleteAtPosition(Node* &head, Node* &tail, int pos){
    if(pos == 1){
        deleteAtHead(head, tail);
        return;
    }
    Node* curr = head;
    while(curr->next != NULL && pos>2){
        curr = curr->next;
        pos--;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    curr->next->prev = curr;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
}

int deleteAtValue(Node* &head, Node* &tail, int data){
    Node* curr = head;
    int c = 0;
    while(curr!=NULL){
        if(curr->data == data){
            Node* temp = curr;
            if(curr->prev != NULL){
                curr->next->prev = curr->prev;
            }else{
                head = head->next;
            }

            if(curr->next != NULL){
                curr->prev->next = curr->next;
            }else{
                tail = tail->prev;
            }

            curr = curr->next;
            temp->next = NULL;
            temp->prev = NULL;
            delete temp;
            c++;
        }else{
            curr = curr->next;
        }
    }
    return c;
}

void RevereseDLL(Node* &head, Node* &tail){

    if(head == NULL || head->next == NULL){
        return;
    }
    Node* curr = head;
    Node* temp = NULL;
    while(curr!= NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    
    temp = head;
    head = tail;
    tail=temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = new Node(1);
    Node* tail = head;
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    insertAtHead(head, tail, 2);
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    insertAtTail(head, tail, 3);
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    insertAtTail(head, tail, 3);
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    insertAtTail(head, tail, 3);
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    insertAtTail(head, tail, 2);
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    insertAtTail(head, tail, 1);
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    insertAtPosition(head, tail, 2, 4);
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    insertAtPosition(head, tail, 5, 10);
    cout<<"Head :-> "<<head->data<<endl;
    cout<<"Tail :-> "<<tail->data<<endl;
    print(head);
    // deleteAtHead(head, tail);
    // cout<<"Head :-> "<<head->data<<endl;
    // cout<<"Tail :-> "<<tail->data<<endl;
    // print(head);
    // deleteAtValue(head, tail, 1);
    // cout<<"Head :-> "<<head->data<<endl;
    // cout<<"Tail :-> "<<tail->data<<endl;
    // print(head);
    // deleteAtPosition(head, tail, 1);
    // cout<<"Head :-> "<<head->data<<endl;
    // cout<<"Tail :-> "<<tail->data<<endl;
    // print(head);
    // RevereseDLL(head, tail);
    // cout<<"Head :-> "<<head->data<<endl;
    // cout<<"Tail :-> "<<tail->data<<endl;
    // print(head);
}