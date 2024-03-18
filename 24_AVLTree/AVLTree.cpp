#include<iostream>
using namespace std;

class Node{
    public:
    int data,height;
    Node *left, *right;
    Node(int val){
        data=val;
        height=1;
        left=right=NULL;
    }

};
int getheight(Node *root){
    if(!root){
        return 0;
    }
    return root->height;
}
int getbalance(Node *root){
    return getheight(root->left)-getheight(root->right);
}
Node *rightrotate(Node *root){
    Node *child=root->left;
    Node *childRight=child->right;
    child->right=root;
    root->left=childRight;
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));
    return child;
}
Node *leftrotate(Node *root){
    Node *child=root->right;
    Node *childLeft=child->left;
    child->left=root;
    root->right=childLeft;
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->right),getheight(child->left));
    return child;
}
Node *insert(Node *root,int key) {
    if(!root){
        return new Node(key);
    }
    if(key<root->data){
        root->left=insert(root->left,key);
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
    else{
        return root;
    }
    root->height=1+max(getheight(root->left),getheight(root->right));

    int balance=getbalance(root);
    // left left case
    if(balance>1 && key<root->left->data) return rightrotate(root);
    // right right case
    if(balance<-1 && key>root->right->data) return  leftrotate(root);
    // left right case
    if(balance>1 && key>root->left->data)
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);   
    }
    // right left case
    if(balance<-1 && key<root->right->data)
    {
        root->right=rightrotate(root->right);
        return leftrotate(root);    
    }
    return root;
}
void inorder(Node *root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(int argc, char const *argv[])
{
    Node *root=nullptr;
    root=insert(root,10);
    root=insert(root,20); 
    root=insert(root,30); 
    root=insert(root,50); 
    root=insert(root,70); 
    root=insert(root,5); 
    root=insert(root,100); 
    root=insert(root,95); 
    cout<<"inorder: "<<endl;
    inorder(root);
    return 0;
}
