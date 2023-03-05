#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node* next;
    node(int val){
        value = val;
        next = NULL;
    }
};
void insertattail(node* &head, int val){        // insert in circular linked list
    node* n1 = new node(val);
    if(head==NULL){
        head = n1;
        head->next=n1;
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next; 
    }
    temp->next = n1;
    n1->next = head;
}
void display(node* n){           // here  pointer is the argument which is passed by value // display in circular linked list
    node* head = n;
    while(n->next!=head){
        cout<<n->value<<" -> ";
        n = n->next;
    }
    cout<<n->value<<"........."<<n->next->value<<"..."<<endl;
}

int main(){
    node* h1 = NULL;
    insertattail(h1,1);
    insertattail(h1,2);
    insertattail(h1,3);
    insertattail(h1,4);
    insertattail(h1,5);
    display(h1);
}
