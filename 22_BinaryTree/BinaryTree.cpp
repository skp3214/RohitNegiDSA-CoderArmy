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
int main(int argc, char const *argv[])
{
    int x;
    int first, second;
    cout << "Enter the root in the binary tree : ";
    cin >> x;
    queue<Node *> q;
    Node *root = new Node(x);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the left value of " << temp->data << ":" << endl;
        cin >> first;
        if (first != -1)
        { 
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout << "Enter the right value of " << temp->data << ":" << endl;
        cin >> second;
        if (second != -1)
        { 
            temp->right = new Node(second);
            q.push(temp->right);
        }
    
    }
    return 0;
}
