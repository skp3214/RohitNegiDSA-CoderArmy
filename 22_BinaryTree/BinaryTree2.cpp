#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = right = nullptr;
    }
};
Node* BinaryTree(){
    int x;
    cin>>x;
    if (x == -1){return nullptr;}
    Node *temp=new Node(x);
    cout<<"Enter the left child of "<<temp->data<<endl;
    temp->left = BinaryTree();
    cout<<"Enter the right child of "<<temp->data<<endl;
    temp->right = BinaryTree();
    return temp;
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the root Node: ";
    Node* root;
    root=BinaryTree();
    return 0;
}
