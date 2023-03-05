#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void left_view(Node* root){
    if(root==NULL) return;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    bool b =true;
    while(!q.empty()){
        Node* n = q.front();
        q.pop();
        if(n!=NULL){
            if(b){
                cout<<n->data<<" ";
            }
            b=false;
            if(n->left!=NULL) q.push(n->left);
            if(n->right!=NULL) q.push(n->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            b=true;
        }
    }
}
void right_view(Node* root){
    if(root==NULL) return;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* n = q.front();
        q.pop();
        if(n!=NULL){
            if(q.front()==NULL){
                cout<<n->data<<" ";
            }
            if(n->left!=NULL) q.push(n->left);
            if(n->right!=NULL) q.push(n->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<"Left view: ";
    left_view(root);
    cout<<endl<<"right view: ";
    right_view(root);
}