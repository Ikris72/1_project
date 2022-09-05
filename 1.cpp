#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the number of rows-\n";
    cin>>a;
    cout<<"Enter the number of column-\n";
    cin>>b;
    for(int i=1; i<=a; i++)
    {
        for(int p=1; p<=b; p++)
        {
            cout<<" * ";
        }
        cout<<"\n\n";
    }

}