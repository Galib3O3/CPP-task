//Given a sorted array of distinct integers, Find the Magic indexs( Index value = Array value) and print it.
#include <iostream>

using namespace std;

int main()
{
	const int limit = 10;
	int list[10], count=0;

	cout<<"Enter 10 integers :"<<endl;

	for(int i=0; i<limit; i++)
	{
		cout<<"\nEnter arr["<<i<<"] Element : ";

		cin>>list[i];

		(list[i]<10) ? : count++;           // "?" operator
	}

	cout<<"Number of interger magic index 10 = "<<count;
}
