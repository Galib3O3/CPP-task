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

    Student info[5];



    for(int i=0; i<5; i++)
    {
        getline(cin,info[i].name);
        cin>>info[i].id;
        cin>>info[i].address;
        cin>>info[i].mark;
        getchar();

    }

    for(int i=0; i<5; i++)
    {
        cout<<info[i].name<<" "<<info[i].id<<" "<<info[i].address<<" "<<info[i].mark<<endl;
    }

    return 0;

}
