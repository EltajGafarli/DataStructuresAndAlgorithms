#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void append(Node** head_ref,int data){
    Node* newNode = new Node(data);
    Node* head = *head_ref;
    if(head == NULL){
        *head_ref = newNode;
    }else{
        while(head->next){
            head = head->next;
        }
        head->next = newNode;
    }
    return;
}

void push(Node** head_ref,int data){
    Node* newNode = new Node(data);
    newNode->next = *head_ref;
    *head_ref = newNode;
    return;
}

void printList(Node* head){
    while(head){
        cout<<head->data<< ' ';
        head = head->next;
    }
}

int main(){
    Node* head = NULL;
    push(&head,2);
    append(&head,12);
    printList(head);
}
