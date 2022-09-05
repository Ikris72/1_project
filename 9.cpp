#include<iostream>
using namespace std;
int main()
{
    int a, k, i;
    cout<<"Enter number of rows__"; cin>>a;
    for(i=1; i<=a; i++)
    {
        for(int j=i; j>=1; j--)
        {
            k=i+j;
            if(k%2 != 0)
            {
                cout<<" 0 ";
            }
            else
            {
                cout<<" 1 ";
            }
        }
        cout<<"\n\n";
    }
}