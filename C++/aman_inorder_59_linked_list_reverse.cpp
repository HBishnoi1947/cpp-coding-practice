#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node* next;
    node(int a){
        value = a;
        next = NULL;
    }
};
void insertattail(node* &head, int val){
    node* n1 = new node(val);
    if(head==NULL){
        head = n1;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next; 
    }
    temp->next = n1;
}
void display(node* n){                                               // here  pointer is the argument which is passed by value
    while(n->next!=NULL){
        cout<<n->value<<" -> ";
        n = n->next;
    }
    cout<<n->value<<" -> NULL";
}

node* reverse_linkedlist_using_recursion(node *&head){                              // reversing linked-list using Recursion
    if(head->next==NULL || head == NULL){
        return head;
    }
    node* new_head = reverse_linkedlist_using_recursion(head->next);
    head->next->next = head; 
    head->next = NULL;
    return new_head;
}

node* reverse_linkedlist_using_iteration(node* &head){                              // reversing linked-list using iteration
    node *previous = NULL;
    node *current = head;
    node *next_head = head->next;
    while(current!=NULL){
        current->next=previous;
        previous = current;
        current = next_head;
        if(next_head!=NULL){
        next_head = next_head->next;
        }
    }
    return previous;
}


int main(){
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    display(head);
        cout<<endl;
    head = reverse_linkedlist_using_recursion(head);
    display(head);
        cout<<endl;
    head = reverse_linkedlist_using_iteration(head);
    display(head);
}