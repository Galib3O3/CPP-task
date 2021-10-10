// Write a program to read n number of values in an array and display it in reverse order.
#include <iostream>
using namespace std;

int main(){
    int in[20], ot[20];
    int n, count;    // integer array          in = input , ot = output

    cout << "Enter number of elements in array :"<<endl;
    cin >> count;

    cout << "Enter " << count << " numbers "<<endl;


    for(n = 0; n < count; n++)
        {
        cin >> in[n];
        }

    for(n= 0; n < count; n++)
    {
        ot[n] = in[count-n-1];       // reverse array
    }

    cout << "Reversed Array\n";
    for(n = 0; n < count; n++)
    {
        cout << ot[n] << " ";
    }

    return 0;
}
