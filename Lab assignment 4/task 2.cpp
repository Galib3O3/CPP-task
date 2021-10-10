// C++ program to check length
// of a given linklist
#include <bits/stdc++.h>
using namespace std;

// Defining structure
class Node
{
    public:
    int data;
    Node* next;
};

// Function to check the length of linklist
int LinkedListLength(Node* head)
{
    while (head && head->next)
    {
        head = head->next->next;
    }
    if (!head)
        return 0;
    return 1;
}

// Push function
void push(Node** head, int info)
{
    // Allocating node
    Node* node = new Node();

    // Info into node
    node->data = info;

    // Next of new node to head
    node->next = (*head);

    // head points to new node
    (*head) = node;
}

// Driver code
int main(void)
{
    Node* head = NULL;

    // Adding elements to Linked List
    push(&head, 4);
    push(&head, 5);
    push(&head, 7);
    push(&head, 2);
    push(&head, 9);
    push(&head, 6);
    push(&head, 1);
    push(&head, 2);
    push(&head, 0);
    push(&head, 5);
    push(&head, 5);
    int check = LinkedListLength(head);

    // Checking for length of
    // linklist
    if(check == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
    return 0;
}

// This is code is contributed by rathbhupendra
