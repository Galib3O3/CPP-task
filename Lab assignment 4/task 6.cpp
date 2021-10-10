//Insert at beginning of a doubly linked list using function
#include <bits/stdc++.h>
using namespace std;

struct Node {
   int data;
   struct Node *prev;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(505);
   insert(404);
   insert(303);
   insert(202);
   insert(101);
   cout<<"The doubly linked list is: ";
   display();

   return 0;
}
