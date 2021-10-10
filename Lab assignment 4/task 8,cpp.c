#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};
void Add(node* &head, int newdata)
{
    //create a new node to hold the data with a terminal (NULL) next pointer
       node *tmp = new node;
       tmp->data = newdata;
       tmp->next;
       node *current = head;
    //check whether head has been initialized (is NULL)
    // if not, make the new node head and set prev
       if ( head != NULL)
       {
            tmp = head;
            tmp->prev = NULL;
       }

    //if head has been initialized
    //find the end of the chain with a pointer
      else
      {
           while (current->next != NULL )
           {
                current = current->next;
           }
      }

    //add the new node on to the last node in the list
    //set pointers both forward and backwards
     tmp = current;
     tmp->prev = current->prev->next;
     tmp->next = current->next;



}
