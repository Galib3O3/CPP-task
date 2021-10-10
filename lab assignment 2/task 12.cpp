//Write a program to insert New value in the exact positions of the sorted array.
#include <iostream>  //// preprocessor
using namespace std;
#define MAX 100

int main()

{int arr[MAX], size, insert, i, pos;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to be insert : ";
	cin>>insert;
	cout<<"which position you insert array  ? ";
	cin>>pos;

	for(i=size; i>pos; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=insert;
	cout<<"Element inserted successfully\n";
	cout<<"Now the new array is : \n";
	for(i=0; i<size+1; i++)
	{
		cout<<arr[i]<<" ";
	}

}
