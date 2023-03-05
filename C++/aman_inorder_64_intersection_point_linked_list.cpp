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
    while(n->next!=NULL){
        cout<<n->value<<" -> ";
        n = n->next;
    }
    cout<<n->value<<" -> NULL"<<endl;
}
int length_node(node* n){
    int count=0;
    while(n!=NULL){
        count++;
        n=n->next;
    }
    return count;
}
int intersection_value(node* n1, node* n2){
    int length_n1 = length_node(n1);
    int length_n2 = length_node(n2);
    if(n2>n1){
        cout<<"Input sequence is wrong....... first linked-list should be larger"<<endl;
        return -10;
    }
    while(length_n2!=length_n1){
        length_n1--;
        n1=n1->next;
    }
    while(n1!=n2){
        if(n1==NULL || n2==NULL){
            return -1;
        }
        n1=n1->next;
        n2=n2->next;
    }
    if(n1==n2){
        return n1->value;
    }
    return -2;
}
int main(){
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    display(head);
    node* h1 = new node(9);
    insertattail(h1, 10);
    h1->next->next = head->next->next->next->next;
    display(h1);
    cout<<intersection_value(head, h1);

}