#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){

    }

    Node(int data){
        this->data = data;
    }

    ~Node(){
        int data = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is free for Node with Data :-> "<<data<<endl;
    }
};

void insertAtHead(Node* &head, int data){
    Node* nn = new Node(data);
    nn->next = head;
    head = nn;
}

void insertAtTail(Node* &head, int data){
    Node* nn = new Node(data);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = nn;
}

int deleteNode_d(Node* &head, int data){
    Node* curr = head;
    Node* prev = NULL;
    int ans = 0;
    while(curr!=NULL){
        if(curr->data == data){
            ans++;
            Node* temp = prev->next;
            prev->next = curr->next;
            curr = curr->next;

            temp->next = NULL;
            delete temp;

        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return ans;
}

void deleteNode_pos(Node* &head, int pos){
    if(pos==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        
        delete temp;
        return;
    }
    Node* temp = head;
    while(temp!=NULL && pos>2){
        temp = temp->next;
        pos--;
    }
    Node* todel = temp->next;
    temp->next = temp->next->next;
    todel->next = NULL;
    delete todel;


}

void insertAtPosition(Node* &head, int pos, int data){

    if(pos==1){
        insertAtTail(head, data);
        return;
    }
    Node* nn = new Node(data);
    Node* temp = head;
    while(temp != NULL && pos > 2){
        temp = temp->next;
        pos--;
    }
    nn->next = temp->next;
    temp->next = nn;
    
}

void ReverseLL(Node* &head){
    Node* curr = head;
    Node* prev = NULL;

    while(curr->next != NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr=temp;
    }
    curr->next = prev;
    head = curr;
}

void reverse(Node* &head, Node* &curr, Node* &prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* temp = curr->next;
    reverse(head, temp, curr);
    curr->next = prev; //backward linking
     
}

void Reverse_recLL(Node* &head){
    if(head == NULL && head->next == NULL){
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);

}

Node* reverse2(Node* &head){
    if(head == NULL || head->next==NULL){
        return head;
    }
    Node* temp = reverse2(head->next);
    head->next->next = head;
    head->next = NULL;

    return temp;
}

void Reverse_rec2LL(Node* &head){
    head = reverse2(head);
    return;
}

Node* findMiddle(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    int c = 1;
    while(temp->next != NULL){
        c++;
        temp = temp->next;
    }
    temp = head;
    int mid = (c/2) + 1;
    while(mid>1){
        temp = temp->next;
        mid--;
    }
    return temp;
}

Node* findMiddle2(Node* head){
     if(head == NULL || head->next == NULL){
        return head;
    }

    Node* pro = head;
    Node* noob = head;

    while(pro->next != NULL){
        pro = pro->next->next;
        noob = noob->next;
    }
    return noob;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



Node* sortTwoLists(Node* first, Node* second)
{
    // Write your code here.
    Node* temp1 = first;
    Node* temp2 = second;
    Node* ans = new Node(0);
    Node* anss = ans;
    while(temp1!=NULL && temp2 != NULL){
        if(temp1->data <= temp2->data){
            ans->next = temp1;
            ans = ans->next;
            temp1 = temp1->next;
        }else{
            ans->next = temp2;
            ans = ans->next;
            temp2 = temp2->next;
        }
    }
    while(temp1!=NULL){
        ans->next = temp1;
        temp1 = temp1->next;
        ans = ans->next;
    }
    while(temp2!=NULL){
        ans->next = temp2;
        temp2 = temp2->next;
        ans = ans->next;
    }

    return anss->next;
}

bool isCircular(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetection(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStarting_point(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetection(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head == NULL){
        return NULL;
    }
    Node* point = getStarting_point(head);
    if(point == NULL){
        return head;
    }
    Node* temp = point;
    while(temp->next != point){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}


int main(){
    // Node* head = new Node(5);
    // insertAtHead(head, 6);
    // insertAtHead(head, 7);
    // insertAtPosition(head, 3, 11);
    // insertAtTail(head, 10);
    // print(head);
    // // cout<<endl<<deleteNode_d(new_node, 6)<<endl;
    // // deleteNode_pos(new_node, 5);
    // // Reverse_rec2LL(head);
    // Node* middle = findMiddle2(head);
    // cout<<middle->data<<endl;;
    // print(head);

    Node* first = new Node(1);
    insertAtTail(first, 3);
    insertAtTail(first, 5);
    print(first);
    Node* second = new Node(2);
    insertAtTail(second, 4);
    insertAtTail(second, 6);

    print(second);

    // Node* merge = sortTwoLists(first, second);
    // print(merge);




}