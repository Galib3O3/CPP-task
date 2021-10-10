//Make search function which will return the node address of a given Item in a linked list.
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int key;
    Node* next;
};


void push(Node** head_ref, int new_key)
{

    Node* new_node = new Node();


    new_node->key = new_key;


    new_node->next = (*head_ref);


    (*head_ref) = new_node;
}


bool search(Node* head, int x)
{
    Node* n_node = head;
    while (n_node != NULL)
    {
        if (n_node->key == x)
            return true;
        n_node = n_node->next;
    }
    return false;
}


int main()
{

    Node* head = NULL;
    int x = 23;

    push(&head, 43);
    push(&head, 12);
    push(&head, 54);
    push(&head, 23);
    push(&head, 44);

    search(head, 23)? cout<<"Yes" : cout<<"No";
    return 0;
}
