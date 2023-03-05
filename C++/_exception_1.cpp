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
int main(){
    node* n1 = NULL;
    insertattail(n1,1);


    //                                                                           // E1
    // int i=1;
    // if( h1->next->next->value==0  ||i){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";    
    // }
    // cout<<endl<<"!st part done";

    //                                                                               //E2
    // if( h1->next->next->value==0 ||1){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";    
    // }
    // cout<<endl<<"2nd part done";

}