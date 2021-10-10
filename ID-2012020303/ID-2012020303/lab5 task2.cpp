//2.Write a Program to traverse that binary tree in in-order manner using array and recursion.

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
    cout<<tree[i]<<" ";
    if(tree[(i*2)+1]!=NULL)
    {
        display((i*2)+1);
    }
}
int main()
{
    tree[1]=20;

    left(3,1);
    right(1, 1);

    left(12,2);
    right(18, 2);

    left(22,3);
    right(14, 3);

    left(9,4);
    right(42, 4);

    display(1);

    return 0;
}


