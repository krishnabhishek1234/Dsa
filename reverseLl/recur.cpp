#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
void reverse(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *temp = curr->next;
    reverse(head, temp, curr);
    curr->next = prev;
}
Node *reverseLinkedList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    reverse(head, curr, prev);
    return head;
}

void printLl(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original Linked List" << endl;
    printLl(head);

    head = reverseLinkedList(head);

    cout << "Reversed Linked List" << endl;
    printLl(head);

    return 0;
}