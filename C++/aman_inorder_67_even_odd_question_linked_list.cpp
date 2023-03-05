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
void display(node* n){           // here  pointer is the argument which is passed by value
    if(n==NULL){
        return;
    }
    while(n->next!=NULL){
        cout<<n->value<<" -> ";
        n = n->next;
    }
    cout<<n->value<<" -> NULL"<<endl;
}

node* even_before_odd(node* n){           // done by my own way............ similar to solution in video
    if(n==NULL){
        return NULL;
    }
    if(n->next==NULL){
        return n;
    }
    node* odd_node = n;
    node* even_node = n->next;
    node* even_head = even_node;

    while(even_node!=NULL && even_node->next!=NULL){
        odd_node->next = even_node->next;
        odd_node = odd_node->next;
        if(odd_node->next==NULL){
            break;
        }
        
        even_node->next = odd_node->next;
        even_node = even_node->next;
    }
    if(even_node->next==NULL){
        even_node->next = n;
        odd_node->next = NULL;
        return even_head;
    }
    if(odd_node->next==NULL){
        even_node->next = n;
        return even_head;
    }
}
int main(){
    node* h1 = NULL;
    insertattail(h1,1);
    insertattail(h1,2);
    insertattail(h1,3);
    insertattail(h1,4);
    insertattail(h1,5);
    insertattail(h1,6);
    display(h1);
    node* h2 = even_before_odd(h1);
    display(h2);

}