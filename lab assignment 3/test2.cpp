#include<bits/stdc++.h>
using namespace std;



  struct student
  {
    int roll_no;
    string name;
    int age;
  };
int main(){
  struct student stud[5];

  for(int i=0; i<=4; i++)
  {
    cout << "Student " << i+1 << endl;
    stud[i].roll_no = i+1;
    cout << "Enter name :\n";
    cin >> stud[i].name;
    cout << "Enter age :\n";
    cin >> stud[i].age;
  }

  for(int i=0; i<=4; i++)
  {
    if(stud[i].roll_no == 2)
    {
      cout << "Student " << i+1 << endl;
      cout << "Roll no. : " << stud[i].roll_no << endl;
      cout << "Name : " << stud[i].name << endl;
      cout << "Age : " << stud[i].age << endl;
    }
  }

  return 0;
}
