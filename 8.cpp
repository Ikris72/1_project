#include<iostream>
using namespace std;
int main()
{
 int a, count=1;
 for(int i=1; i<=5; i++)
 {
    for(int j=i; j<=5; j++)
    {
        cout<<count;
        count++;   
    }
    count=1;
    cout<<"\n\n";
 }   

}