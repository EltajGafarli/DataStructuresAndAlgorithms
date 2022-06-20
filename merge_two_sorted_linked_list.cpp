#include <bits/stdc++.h>
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

Node* merge(Node *l1, Node *l2){
    Node* res = new Node(0);
    Node* curr = res;
    while(1){
        if(l1 == NULL){
            curr->next = l2;
            break;
        }
        if(l2 == NULL){
            curr->next = l1;
            break;
        }

        if(l1->data< l2->data){
            curr->next = l1;
            l1 = l1->next;
        }else{
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }
    return res->next;

}

void append(Node** head_ref,int data){
    Node* newNode = new Node(data);
    Node* head = *head_ref;
    if(head == NULL){
        *head_ref = newNode;
    }else{
        while(head->next != NULL){
            head = head->next;
        }
        head->next = newNode;
    }
}

void printList(Node* head){
    while(head){
        cout<<head->data<< ' ';
        head = head->next;
    }
}

int main(){
    Node* head = new Node(0);
    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,4);
    append(&head,5);
    Node* head1 = new Node(-1);
    append(&head1,1);
    append(&head1,3);
    append(&head1,6);
    append(&head1,7);

    Node* merged = merge(head,head1);

    printList(merged);
}
