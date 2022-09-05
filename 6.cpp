//floyd's triangle
#include<iostream>
using namespace std;
int main()
{
    int a, j;
    int count=1;
    cout<<"Enter number of rows_"; cin>>a;
    for(int i=1; i<=a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<count<<"  ";
            count++;
        }
     cout<<"\n\n";
    }
}