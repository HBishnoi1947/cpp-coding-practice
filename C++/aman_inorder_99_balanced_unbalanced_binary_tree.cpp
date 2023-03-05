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
int height(Node* root){
    if(root==NULL) return 0;
    return max(height(root->left),height(root->right))+1;
}
bool isbalanced(Node* root){                                            // O(n^2)
    if(root==NULL) return true;
    if(isbalanced(root->left)==false || isbalanced(root->right)==false) return false;

    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)<=1) return true;
    else return false;
}

bool isbalanced_optimised(Node* root, int &height){                                            // O(n)
    if(root==NULL) return true;
    int lh=0,rh=0;
    if(isbalanced_optimised(root->left,lh)==false || isbalanced_optimised(root->right,rh)==false) return false;
    height=max(lh,rh) + 1;
    if(abs(lh-rh)<=1) return true;
    else return false;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // cout<<"Balanced tree: "<<isbalanced(root);
    int height=0;
    cout<<"Balanced tree: "<<isbalanced_optimised(root,height)<<endl;
    cout<<"height = "<<height;
}