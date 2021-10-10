// program to count the frequency of each element of an array.
#include <iostream>
using namespace std;

int main()

{

    int freuency[100];

    int size, i, j, count;



cout << "Enter size of array:";

    cin >> size;

    int arr[size];

cout << "Enter elements in array:";

    for(i=0; i<size; i++)

    {

        cin >> arr[i];
        freuency[i] = -1;

    }

    for(i=0; i<size; i++)

    {

        count = 1;

        for(j=i+1; j<size; j++)

        {
           if(arr[i]==arr[j])
        {
             count++;

               freuency[j] = 0;
            }

        }

        if(freuency[i] != 0)

        {

           freuency[i] = count;

        }
    }

cout << "Frequency of all elements of array :";

    for(i=0; i<size; i++)

    {
        if(freuency[i] != 0)

        {
            cout << arr[i] << "occurs " << freuency[i] << " times"  << endl;
        }
    }
}
