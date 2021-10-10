// Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10).
// Store the information of the students.
#include<bits/stdc++.h>

using namespace std;

int studAge();

struct Student
{

    string name, address;
    int id,age;
};

int main()
{
    int i, n=20;
    Student info[1-20];

    while(n--)
    {
        cout << "\nEnter n number of Student(20): ";             // Input range = 1 to 20
        cin >> n;
        getchar();

        for( i=0; i<n; i++)
        {
            cout<<"\nEnter student name: ";
            getline(cin,info[i].name);
            cout<<"\nEnter student id: ";
            cin>>info[i].id;
            cout<<"\nEnter student age(11-14): ";
            cin>>info[i].age;
            cout<<"\nEnter student address:";
            cin>>info[i].address;
            getchar();

        }
        cout<<endl;

        for( i=0; i<n; i++)
        {
            cout<<info[i].name<<" "<<info[i].id<<" "<<info[i].age<<" "<<info[i].address<<endl;
        }
        break;
    }


}

