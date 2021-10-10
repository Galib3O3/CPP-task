// Write a structure for n students' name, id, address and mark, take them as input and print it.
#include<bits/stdc++.h>

using namespace std;

struct Student
{

    string name, address;
    int id;
    float mark;
};

int main()
{
    int i, n;
    Student info[1000];

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
            cout<<"\nEnter student address: ";
            cin>>info[i].address;
            cout<<"\nEnter student mark:";
            cin>>info[i].mark;
            getchar();

        }
        cout<<endl;

        for( i=0; i<n; i++)
        {
            cout<<info[i].name<<" "<<info[i].id<<" "<<info[i].address<<" "<<info[i].mark<<endl;
        }
        break;
    }




}
