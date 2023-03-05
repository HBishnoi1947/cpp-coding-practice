#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* previous;
    node(int val){
        data = val;
        next=NULL;
        previous = NULL;
    }
};
void insert_at_tail(node*&head, int val){
    node* temp = head;
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" - ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int list_length(node* head){
    int count=0;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}
void k_nodes_append(node* &head, int k){                // taking k nodes from tail and appending at the head
    node* temp = head;
    node* old_head = head;
    int l = list_length(head);
    if(k>l){
        cout<<"error: k is greater than l"<<endl;
        return;
    }
    for(int i=1; i!=l-k+1; i++){
        temp = temp->next;
    }
    temp->previous->next=NULL;
    temp->previous=NULL;
    head = temp;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=old_head;
    old_head->previous=temp;
}
int main(){
    node* head = new node(1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    k_nodes_append(head,9);
    display(head);
}