//Write a program to find the second largest and second smallest element in an array.
#include<iostream>
using namespace std;
int main ()
{
    int A[10], n, i, j, x;
    cout << "Enter size of array : ";
    cin >> n;

   for(i=0; i<n; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element : ";       //for elements[0] :
                                                           //    elements[1]:
                cin>>A[i];
        }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    cout<<endl;
    cout << "Second largest number : " << A[1];
    cout << "\nSecond smallest number : " << A[n - 2];
    return 0;
}
