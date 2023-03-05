#include<iostream>
#include<bits/stdc++.h>
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
int calcHeight(Node* root){                                         // O(n) 
    if(root == NULL) return 0;
    // int lHeight = calcHeight(root->left);
    // int rHeight = calcHeight(root->right);
    // return max(lHeight,rHeight) + 1;
    return max(calcHeight(root->left), calcHeight(root->right)) +1;
}

int calcDiameter(Node* root){                                       //O(n^2)
    if(root == NULL) return 0;
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int curDiameter = lHeight + rHeight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);
    return max(curDiameter, max(lDiameter, rDiameter));
}

int calcDiameter_optimised(Node* root, int &height){                   // O(n) 
    if(root==NULL) return 0;
    int lh=0,rh=0;
    int lDiameter = calcDiameter_optimised(root->left, lh);
    int rDiameter = calcDiameter_optimised(root->right, rh);
    
    int curDiameter = lh + rh + 1;
    height =  max(lh,rh) + 1;
    return max(curDiameter, max(lDiameter,rDiameter));
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int height=0;
    // cout<<calcHeight(root);
    // cout<<calcDiameter(root);
    cout<<calcDiameter_optimised(root,height);
}