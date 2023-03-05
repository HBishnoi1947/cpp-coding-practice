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
void level_order_print(Node* root){
    if(root==NULL) return;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* n = q.front();
        q.pop();
        if(n!=NULL){
            cout<<n->data<<" ";
            if(n->left!=NULL) q.push(n->left);
            if(n->right!=NULL) q.push(n->right);
        }
        else if(!q.empty()) q.push(NULL);
    }
}

void Kth_level_Nodes(Node* root, int k){                           // Printing all Nodes at Kth level
    if(root==NULL) return;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    while(!q.empty()){
        Node* n = q.front();
        q.pop();
        if(n!=NULL){
            if(level==k) cout<<n->data<<" ";
            if(n->left!=NULL) q.push(n->left);
            if(n->right!=NULL) q.push(n->right);
        }
        else if(!q.empty()) {level++; q.push(NULL);}
    }
}
void SumAtK(Node* root, int k){                           // Print sum of all Nodes at Kth level
    if(root==NULL) return;
    int sum=0;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    while(!q.empty() && level<=k){
        Node* n = q.front();
        q.pop();
        if(n!=NULL){
            if(level==k) sum+=n->data;
            if(n->left!=NULL) q.push(n->left);
            if(n->right!=NULL) q.push(n->right);
        }
        else if(!q.empty()) {level++; q.push(NULL);}
    }
    cout<<endl<<"Sum => "<<sum;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // level_order_print(root);
    Kth_level_Nodes(root, 2);
    SumAtK(root,2);
}