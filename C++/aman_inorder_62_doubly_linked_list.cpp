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
void insert_at_head(node*&head, int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    head->previous=n;
    n->next=head;
    head=n;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" - ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
void delete_node(node*&head, int val){
    node* temp = head->next;
    if(head==NULL){
        return;
    }
    if(head->data==val){
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }
        head = head->next;
        delete head->previous;
        head->previous=NULL;
        return;
    }
    while(temp!=NULL){
        if(temp->data==val){
            temp->previous->next=temp->next;
            if(temp->next!=NULL){
                temp->next->previous=temp->previous;
            }
            delete temp;
            return;
        }
        temp=temp->next;
    }
}
int main(){
    // node* head = new node(2);
    // insert_at_tail(head, 3);
    // insert_at_tail(head, 4);
    // insert_at_head(head,1);
    // display(head);
    // delete_node(head, 4);
    // delete_node(head, 2);
    // delete_node(head, 3);
    // delete_node(head, 1);
    // display(head);
   
   
    // node* h = NULL;
    // insert_at_tail(h,1);
    // display(h);
    // delete_node(h,1);
    // display(h);


    node* head = new node(2);
    insert_at_tail(head, 3);
    display(head);
    node* h = new node(5);
    head->next->next = h;
    display(head);

}