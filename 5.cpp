#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"No of rows_"; cin>>a;
    for(int i=1; i<=a; i++)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<i;
        }
        cout<<"\n\n";
    }
}