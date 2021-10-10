// Write a program to find the sum of all n elements of the array using while loop.
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter siz number ";
	cin>>n;
	while(n>0)           // condition
	{
		sum+=n;
		n--;
	}
	cout<<"sumation of the  number  = "<<sum;
	return 0;
}
