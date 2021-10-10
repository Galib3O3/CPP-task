#include <bits/stdc++.h>

using namespace std;


struct Node
{
    int data;
    struct Node* next;
};


void findMaxMin(struct Node* head, int n)
{

    int min = INT_MAX;


    int max = INT_MIN;


    while (head != NULL)
    {


        if ((head->data < min) && (head->data % n == 0))
            min = head->data;


        if ((head->data > max) && (head->data % n == 0))
            max = head->data;

        head = head->next;
    }


    cout << "Max Element : " << max << endl;


    cout << "Min Element : " << min;
}


void push(struct Node** head, int data)
{

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));


    newNode->data = data;


    newNode->next = (*head);


    (*head) = newNode;
}


int main()
{

    struct Node* head = NULL;


    push(&head, 5);
    push(&head, 14);
    push(&head, 44);
    push(&head, 30);
    push(&head, 60);

    int n = 5;

    findMaxMin(head, n);

    return 0;
}
