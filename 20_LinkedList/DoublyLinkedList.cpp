#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->data = value;
        next = NULL;
        prev = NULL;
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
        newNode->prev = currNode;
    }
};
void insertAtIndex(int index, int val)
{
    Node *newNode = new Node(val);
    if (index == 1)
    {
        if (head == NULL)
        {
            createList(val);
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
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
        newNode->prev = currNode;
        if (newNode->next != NULL)
        {
            newNode->next->prev = newNode;
        }
    }
}

void deleteAtIndex(int index){
    if(index==1){
       head=head->next;
       if(head!=NULL){
        head->prev=NULL;
       }
    }
    else{
        Node* currNode=head;
        for(int i=1;i<index-1;i++){
            currNode=currNode->next;
        }
        currNode->next=currNode->next->next;
        if(currNode->next!=NULL){
            currNode->next->prev=currNode;
        }
    }
}

void printList()
{
    Node *currNode = head;
    cout << "The list is : ";
    while (currNode != NULL)
    {
        cout << currNode->data << " -> ";
        currNode = currNode->next;
    }
    cout << "Null" << endl;
}
int main(int argc, char const *argv[])
{
    cout << "How many nodes do you want to create: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        int x;
        cin >> x;
        createList(x);
    }
    printList();
    cout << "Enter the index you want to insert the node: ";
    int ind;
    cin >> ind;
    cout << "Enter the value of the node you want to insert: ";
    int val;
    cin >> val;
    insertAtIndex(ind, val);
    printList();
    cout<<"Enter the index you want to delete:";
    int delInd;
    cin>>delInd;
    deleteAtIndex(delInd);
    printList();
    return 0;
}
