// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Structure of a node of
// the doubly linked list
struct Node {

    // Stores data value
    // of a node
    int data;

    // Stores pointer
    // to next node
    Node* next;

    // Stores pointer
    // to previous node
    Node* prev;
};

// Function to insert a node at the
// beginning of the Doubly Linked List
void push(Node** head_ref, int new_data)
{

    // Allocate memory for new node
    Node* new_node
        = (Node*)malloc(sizeof(struct Node));

    // Insert the data
    new_node->data = new_data;

    // Since node is added at the
    // beginning, prev is always NULL
    new_node->prev = NULL;

    // Link the old list to the new node
    new_node->next = (*head_ref);

    // If pointer to head is not NULL
    if ((*head_ref) != NULL) {

        // Change the prev of head
        // node to new node
        (*head_ref)->prev = new_node;
    }

    // Move the head to point to the new node
    (*head_ref) = new_node;
}

// Function to find the position of
// an integer in doubly linked list
int search(Node** head_ref, int x)
{

    // Stores head Node
    Node* temp = *head_ref;

    // Stores position of the integer
    // in the doubly linked list
    int pos = 0;

    // Traverse the doubly linked list
    while (temp->data != x
           && temp->next != NULL) {

        // Update pos
        pos++;

        // Update temp
        temp = temp->next;
    }

    // If the integer not present
    // in the doubly linked list
    if (temp->data != x)
        return -1;

    // If the integer present in
    // the doubly linked list
    return (pos + 1);
}

// Driver Code
int main()
{
    Node* head = NULL;
    int X = 8;

    // Create the doubly linked list
    // 18 <-> 15 <-> 8 <-> 9 <-> 14
    push(&head, 14);
    push(&head, 9);
    push(&head, 8);
    push(&head, 15);
    push(&head, 18);

    cout << search(&head, X);

    return 0;
}
