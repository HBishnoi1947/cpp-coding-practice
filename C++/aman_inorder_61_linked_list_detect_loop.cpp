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
void display(node* n){           // here  pointer is the argument which is passed by value not by reference
    while(n->next!=NULL){
        cout<<n->value<<" -> ";
        n = n->next;
    }
    cout<<n->value<<" -> NULL";
}
bool detect_loop(node* n){          // passed by value not by reference
    node* faster = n;
    node* slower = n;
    while(faster->next!=NULL || faster!=NULL){
        faster=faster->next->next;
        slower=slower->next;
        if(faster==slower){
            cout<<"Loop is present"<<endl;
            return 1;
        }
    }
    cout<<"Loop is not present"<<endl;
    return 0;
}
void remove_loop(node*& n){
    if(detect_loop(n)){
        node* faster = n->next->next;
        node* slower = n->next;
        while(faster!=slower){
            faster = faster->next->next;
            slower = slower->next;
        }
        faster = n;
        if(slower==n){
            while(faster->next!=n){
                faster=faster->next;
            }
            faster->next=NULL;
            return;
        }
        while(faster->next!=slower->next){
            faster = faster->next;
            slower = slower->next;
        }
        slower->next = NULL;
        cout<<faster->value<<endl;
    }
    else{
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
    insertattail(head,6);
    head->next->next->next->next->next->next=head->next->next;
    detect_loop(head);
    remove_loop(head);
    cout<<endl;

    display(head);

}
