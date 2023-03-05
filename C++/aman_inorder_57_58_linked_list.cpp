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
void insertathead(node* &head, int val){
    node  *n1 = new node(val);
    n1->next = head;
    head = n1;
}
void display(node* n){           // here  pointer is the argument which is passed by value
    while(n->next!=NULL){
        cout<<n->value<<" -> ";
        n = n->next;
    }
    cout<<n->value<<" -> NULL";
}
void deletenode(node*&head, int val){
    if(head->value==val){
        if(head->next==NULL){
            head->value=0;
            return;
        }
        else{
            head = head->next;
            return;
        }
    }
    node *temp = head;
    while(temp->next->value!=val && temp->next->next!=NULL){
        temp = temp->next;
    }
    if(temp->next->value==val){
            node* temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
            return;
    }
    else if(temp->next->next==NULL){
        cout<<"No Match"<<endl;
        return;
    }
}

int main(){
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertathead(head,0);
    display(head);
    cout<<endl;
    // deletenode(head,9);
    // display(head);

}