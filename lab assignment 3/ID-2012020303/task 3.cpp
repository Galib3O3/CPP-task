//Write a program to sort the above structure in descening way using STL sort function on the basis of id field.
//name the bool function as compareid.
#include<bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    int id;
};


void display(student p1)
{
    cout<<p1.id;
}

bool compareId(student s1, student s2)
{
    if (s1.id>s2.id)return true;
    else return false;
}

int main()
{
    int i, n;
    student info[1000];

    while(n--)
    {
        cout << "\nEnter n number of Student: ";             // Input range = 1 to 1000
        cin >> n;
        getchar();

        for( i=0; i<n; i++)
        {
            cout<<"\nEnter student name: ";
            getline(cin,info[i].name);
            cout<<"\nEnter student id: ";
            cin>>info[i].id;
            getchar();

        }
        sort (info, info+n,compareId);
        for( i=0; i<n; i++)
        {
            cout<<info[i].name<<" "<<info[i].id<<endl;
        }
        break;
    }




}
