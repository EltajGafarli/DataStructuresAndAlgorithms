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

int length(Node* head){
    if(head){
        return 0;
    }
    return 1 + length(head->next);
}

Node* removeNthFromEnd(Node* head,int n){
    int len = length(head);
    int x = len-n;
    Node* temp = head;
    while(x>0){
        temp = temp->next;
        x--;
    }
    Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
    return head;

}
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
void printList(Node* head){
    while(head){
        cout<<head->data<< ' ';
        head = head->next;
    }
    cout<<endl;
}


int main(){
    Node* head = NULL;
    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,4);
    append(&head,5);
    printList(head);
    Node* res = removeNthFromEnd(head,2);
    printList(res);
}
