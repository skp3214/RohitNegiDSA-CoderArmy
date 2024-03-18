#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int value){
        data=value;
        left=right=nullptr;
    }
};
Node *insert(Node* root,int value) {
     if (root == nullptr){
        Node *temp=new Node(value);
        return temp;
     }
     if(value < root->data ) {
         root->left = insert(root->left, value);
     } else if(value > root->data) {
         root->right = insert(root->right, value);
     }
     return root;
};
void inorder(Node *root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
};

bool Search(Node *root,int target){
    if(!root){
        return false;
    }
    if(root->data==target){
        return true;
    }
    else if(target<root->data){
        return Search(root->left,target);
    }
    else{
        return Search(root->right,target);
    }
};

void deleteNode(Node *root,int target){

    
};

int main(int argc, char const *argv[])
{
    int arr[]={6,3,17,5,11,18,2,1,20,34};
    Node *root=nullptr;
    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }
    inorder(root);
    bool ans=Search(root,21);
    if(ans){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    deleteNode(root,18);
    return 0;
}
