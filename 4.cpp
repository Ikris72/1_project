#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number of rows _ "; cin>>a;
    for(int i=1; i<=a; i++)
    {
        for(int p=1; p<=a; p++)
        {
            if(p>=((a+1)-i) && p<=a)
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