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
        currNode->next = newNode;
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
    cout << "NULL" << endl;
}

void insertAtindex(int index, int data)
{
    Node *newNode = new Node(data);
    if (index == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *currNode = head;
        for (int i = 1; i < index - 1; i++)
        {
            currNode = currNode->next;
        }
        newNode->next = currNode->next;
        currNode->next = newNode;
    }
}

void deleteAtIndex(int index)
{
    if (head == NULL || index <= 0)
        return;
    if (index == 1)
    {
        head = head->next;
    }
    else
    {
        Node *curNode = head;
        for (int i = 1; i < index - 1; i++)
        {
            curNode = curNode->next;
        }
        curNode->next = curNode->next->next;
    }
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
    cout << "Enter the index and data to insert at given index: ";
    int indx, dat;
    cin >> indx >> dat;
    insertAtindex(indx, dat);
    printList();
    cout << "Enter the index to delete the node: ";
    int delIndx;
    cin >> delIndx;
    deleteAtIndex(delIndx);
    printList();

    return 0;
}
