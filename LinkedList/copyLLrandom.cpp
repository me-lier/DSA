#include<iostream>
using namespace std;

Node* copyRandomList(Node* head) { // using hasmap././././
    Node* temp = head;
    Node* ans = new Node(0);
    Node* ans_head = ans;
    map<Node*, Node*> mp;
    while(temp != NULL){
        ans->next = new Node(temp->val);
        ans = ans->next;
        mp[temp] = ans;
        temp = temp->next;
    }
    temp = head;
    ans = ans_head->next;
    while(temp != NULL){
        if(temp->random != NULL) ans->random = mp[temp->random];
        else ans->random = NULL;
        ans = ans->next;
        temp = temp->next;
    }
    return ans_head->next;
}

Node* copyRandomList(Node* head) { //inplace making new Nodes/......
    Node* temp = head;
    while(temp != NULL){
        Node* next = temp->next;
        temp->next = new Node(temp->val);
        temp->next->next = next;
        temp = next;
    }
    temp = head;
    while(temp != NULL){
        if(temp->random != NULL) temp->next->random = temp->random->next;
        temp = temp->next->next;
    }
    Node* ans = new Node(0);
    Node* ans_head = ans;
    temp = head;
    while(temp != NULL){
        ans->next = temp->next;
        ans = ans->next;
        temp->next = temp->next->next;
        temp = temp->next;
    }
    return ans_head->next;
}

int main(){

}