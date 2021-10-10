//Write a program to print all unique elements in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, Uniq;
    int i, j, k;


    cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }


    for(i=0; i<size; i++)
    {
        Uniq= 1;

        for(j=i+1; j<size; j++)
        {



            if(arr[i]==arr[j])
            {
                // Removing duplicate element
                for(k=j; k<size-1; k++)
                {
                    arr[k] = arr[k+1];
                }

                size--;
                j--;
                Uniq= 0;
            }
        }

        if(Uniq != 1)
        {
            for(j=i; j<size-1; j++)
            {
                arr[j] = arr[j+1];
            }

            size--;
            i--;
        }
    }

    cout<<"All unique elements in the array are: ";
    for(i=0; i<size; i++)
    {
       cout<<arr[i]<<"\t";
    }
    return 0;
}
