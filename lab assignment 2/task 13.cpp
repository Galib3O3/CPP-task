//Write a program to delete an element at desired position (given index) from an array.
#include<iostream>
using namespace std;

int main()
{
   int i,a[50],n,p,size;
    cout<<"Enter array size : ";
    cin>>size;
        cout<<"\nEnter array elements :"<<endl;

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element : ";       //for elements[0] :
                                                           //    elements[1]:
                cin>>a[i];
        }
  cout<<"\nStored Data in Array "<<endl;

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

  cout<<"\n\nEnter position to Delete number : ";
  cin>>p;

  if(p>size)
  {
    cout<<"\nThis is not found in your input.\n";
  }
  else
   {
   --p;
   for(i=p;i<=size-1;i++)
   {
    a[i]=a[i+1];
   }
   cout<<"\nNew Array is :"<<endl;;

  for(i=0;i<size-1;i++)
  {
    cout<<" "<<a[i]<<" ";
  }

  }
  cout<<endl;;

  return 0;

  }
