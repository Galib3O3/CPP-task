#include <iostream>
using namespace std;
int main()
{
    int list[100],list2[100];
    int n;
    int i,j;

    cout<<"Enter integer number for copy : "<<endl;
    cin>>n;

    cout<<"Enter the number  : "<<endl;


    for(i=0; i<n; i++)
    {
        cin>>list[i];
    }
    for(i=0; i<n; i++)
    {
        list2[i]=list[i];
    }
    cout<<"copied number "<<endl;
    for(i=0; i<n; i++)

        cout<<list2[i]<<endl;

}
