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
// int length_node(node* n){
//     int count=0;
//     while(n!=NULL){
//         count++;
//         n=n->next;
//     }
//     return count;
// }

node* merge_linkedlist(node* n1, node* n2){      // merge two linked list in sorted manner using iteration
    node* head = new node(-1);
    node* temp = head;
    while(n1!= NULL && n2!= NULL){
        if(n1->value<n2->value){
            temp->next = n1;
            temp = temp->next;
            n1=n1->next;
        }
        else if(n1->value>n2->value){
            temp->next = n2;
            temp = temp->next;
            n2 = n2->next;
        }
        else{
            temp->next=n1;
            temp = temp->next;
            n1 = n1->next;

            temp->next=n2;
            temp = temp->next;
            n2 = n2->next; 
        }
    }
    if(n1==NULL){
        temp->next=n2;
    }
    if(n2==NULL){
        temp->next=n1;
    }
    return head->next;
}
node* merge_recursive(node* n1, node* n2){              // merge two linked list in sorted manner using recurrsion
    if(n1==NULL){
        return n2;
    }
    if(n2==NULL){
        return n1;
    }
    node* result;
    if(n1->value>n2->value){
        result = n2;
        result->next= merge_recursive(n1, n2->next);
    }
    else if(n1->value<n2->value){
        result = n1;
        result->next= merge_recursive(n1->next, n2);
    }
    else{
        result = n1;
        n1=n1->next;
        result->next = n2;
        result->next->next = merge_recursive(n1, n2->next);
    }
    return result;
}
int main(){
    node* h1 = NULL;
    insertattail(h1,1);
    insertattail(h1,4);
    insertattail(h1,5);
    insertattail(h1,7);

    node* h2 = new node(2);
    insertattail(h2,3);
    insertattail(h2,6);

    display(h1);
    display(h2);
    cout<<endl;
    node* merged = merge_recursive(h1, h2);
    node* merged = merge_linkedlist(h1, h2);
    display(merged);

}