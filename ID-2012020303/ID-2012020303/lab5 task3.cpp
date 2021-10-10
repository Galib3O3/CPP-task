//3.Write a Program to traverse that binary tree in post-order manner using array and recursion.

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
void display(int i)
{
    if(tree[i*2]!=NULL)
    {
        display(i*2);
    }
    if(tree[(i*2)+1]!=NULL)
    {
        display((i*2)+1);
    }
    cout<<tree[i]<<" ";
}

int main()
{
    tree[1]=20;

    left(3,1);
    right(12, 1);

    left(4,2);
    right(5, 2);

    left(2,3);
    right(10, 3);

    left(11,4);
    right(32, 4);

    display(1);

    return 0;
}


