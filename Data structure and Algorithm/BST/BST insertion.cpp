#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};


Node *insertBST(struct Node *root, int val){
    if(root == NULL){

        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }else{

        root->right = insertBST(root->right, val);
    }

    return root;
}
// INORDER FUNCTION

void inorder(struct Node *root){
    if(root == NULL){
        return ;

    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
    struct Node *root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    inorder(root);

    return 0;
}
