#include<iostream>
using namespace std;
int main()
{
    //a-rows and b-column
    int a, b;
    cout<<"Enter the number of rows -"; cin>>a;
    cout<<"Enter the number of column -"; cin>>b;
    for(int i=1; i<=a; i++)
    {
        for(int p=1; p<=b; p++)
        {
            if(i==1||i==a||p==1||p==b)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        printf("\n\n");
    }
    
}