3//Make a structure named Date to store the elements day, month and year to store the dates.
//If i give a date as input and if the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

#include<bits/stdc++.h>

using namespace std;

struct Date{
    int day, month, year;
};




int main()
{
    int i, n=0;

    struct Date d[2];

    for(i=0; i<2; i++)
    {
        cout<<"\nEnter the day = ";
        cin>>d[i].day;

        cout<<"\nEnter the month = ";
        cin>>d[i].month;

        cout<<"\nEnter the year = ";
        cin>>d[i].year;
    }

    if(d[0].day==d[1].day)
    {
       if(d[0].month==d[1].month)
        {
             if(d[0].year==d[1].year)
            {
                n=1;
            }
        }
    }

    if(n==1)
        cout<<"\nDates are equal";

    else
        cout<<"\nDates are not equal";
}
