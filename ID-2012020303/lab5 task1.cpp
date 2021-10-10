//1.Write a Program to traverse that binary tree in pre-order manner using array and recursion.

#include<bits/stdc++.h>
using namespace std;
int tree[10000];
void left(int x, int y)
{
    if(tree[y] == NULL)
    {
        return;
    }
    else
    {
        tree[y*2]=x;
    }
}
void right(int x, int y)
{
    if(tree[y] == NULL)
    {
        return;
    }
    else
    {
        tree[(y*2)+1]=x;
    }
}

void display (int i)
{
    cout<<tree[i]<<" ";
    if(tree[i*2]!=NULL)
    {
        display(i*2);
    }
    if(tree[(i*2)+1]!=NULL)
    {
        display((i*2)+1);
    }
}

int main()
{
   tree[1]=20;

    left(12,1);
    right(13, 1);

    left(9,2);
    right(8, 2);

    left(5,3);
    right(2, 3);

    left(19,4);
    right(23, 4);

    display(1);

    return 0;
}


