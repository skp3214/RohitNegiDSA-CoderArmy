#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        this->data = value;
        next = NULL; 
    }
};

Node *head;

void createList(int data)
{
    Node *newNode = new Node(data); 
    if (head == NULL)
    {
        head = newNode; 
    }
    else
    {
        Node *currNode = head;
        while (currNode->next != NULL)
        {
            currNode = currNode->next;
            
        }
        currNode->next=newNode;
    }
}

void printList()
{
    Node *temp = head;
    cout << "The Linked List is : ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

int main(int argc, char const *argv[])
{
    cout << "How many node you want to create: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter number " << i + 1 << ": ";
        cin >> data;
        createList(data); 
    }
    printList();
    return 0;
}
