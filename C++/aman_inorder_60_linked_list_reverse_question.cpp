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
void add_nodeattail(node* &head, int data){
    node* new_node = new node(data);
    if(head == NULL){
        head = new_node;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
            temp = temp->next;
    }
    temp->next = new_node;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->value<<" --> ";
        head = head->next;
    }
    cout<<"NULL";
}

node* reverse_k_node(node* &head, int k){            // revrse k node consequently i.e, reverse k nodes first then next k nodes
int count=0;
node* current = head;
node* previous = NULL;
node* next_node;
while(current!=NULL && count<k){
    next_node = current->next;
    current->next = previous;
    previous = current;
    current = next_node;
    count++;
}
if(next_node!=NULL){
    head->next = reverse_k_node(next_node, k);
}
return previous;
}

int main(){
    node* head = NULL;
    add_nodeattail(head,1);
    add_nodeattail(head,2);
    add_nodeattail(head,3);
    add_nodeattail(head,4);
    add_nodeattail(head,5);
    add_nodeattail(head,6);
    add_nodeattail(head,7);
    add_nodeattail(head,8);
    add_nodeattail(head,9);
    add_nodeattail(head,10);
    display(head);
    cout<<endl;
    node* n = reverse_k_node(head, 4);
    display(n);
    
}