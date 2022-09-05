#include<iostream>
using namespace std;
int main()
{
    //a-rows b-column
    int a;
    cout<<"Enter the number of rows:- "; cin>>a;
    for(int i=a; i>=1; i--)
    {
        for(int p=i; p>=1; p--)
        {
            cout<<" * ";
        }
        cout<<"\n\n";
    }
}