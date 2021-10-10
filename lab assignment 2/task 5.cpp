//Write a program to count a total number of duplicate elements in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int a, b, n, count = 0;


    cout<<"Enter size of the array =";
    cin>>n;


    cout<<"Enter elements in array = ";
    for(a=0; a<n; a++)
    {
        cin>>arr[a];
    }

    for(a=0; a<n; a++)
    {
        for(b=a+1; b<n; b++)
        {

        if(arr[a] == arr[b])
            {
                count++;
                break;
            }
        }
    }
    cout<<"\nTotal number of duplicate elements : "<<count;

    return 0;
}
