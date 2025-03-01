#include<iostream>
using namespace std;

class ListNode{
    int val;
    ListNode* next;
    ListNode();

};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(headA == NULL ^ headB == NULL) return NULL;
    map<ListNode*, int> mp;
    while(headA != NULL){
        mp[headA] = 1;
        headA = headA->next;
    }
    while(headB != NULL){
        if(mp.count(headB)){
            return headB;
        }
        headB = headB->next;
    }
    return NULL;
    
}

int getLength(ListNode* head){
    int l = 0;
    while(head != NULL){
        head = head->next;
        l++;
    }
    return l;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(headA == NULL ^ headB == NULL) return NULL;
    int a = getLength(headA);
    int b = getLength(headB);
    if(a > b){
        while(a-b != 0){
            headA = headA->next;
            a--;
        }
    }else if(b > a){
        while(b-a != 0){
            headB = headB->next;
            b--;
        }
    }
    while(headA != headB && headA != NULL && headB != NULL){
        headA = headA->next;
        headB = headB->next;
    }
    if(headA == headB){
        return headA;
    }
    return NULL;
    
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* a = headA;
    ListNode* b = headB;
    while(a != b){
        if(a == NULL){
            a = headB;
        }else{
            a = a->next;
        }

        if(b == NULL){
            b = headA;
        }else{
            b = b->next;
        }
    }
    return a;
}

int main(){

}