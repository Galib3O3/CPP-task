#include<iostream>

using namespace std;

struct sturdent{

char name[100];
int id, address;
float mark;
};

int main()
{
    student info[];

    for(int i=0; i++)
    {
        cin.get(info[i].name,100);
        cin>>info[i].id;
        cin>>info[i].address;
        cin>>info[i].mark;
    }

    for(int=o;i++)
    {
        cout<<info[i].name<<""<<info[i].id<""<<info[i].address<<""<<info[i].mark<<endl;
    }
}
