//butterfly pattern
#include<iostream>
using namespace std;
int main()
{
    //defining a constant variable
    int a;
    cout<<"No of rows_"; cin>>a;

    //1st half
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=(2*a); j++)
        {
            if(j<=i||j>=((2*a+1)-i))
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n\n";
    }
    //-----------------------***------------------//

    //2nd half
    for(int p=1; p<=a; p++)
    {
        for(int q=1; q<=(2*a); q++)
        {
            if(q<=((a+1)-p) || q>=(a+p))
            {
               cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n\n";
    }

}