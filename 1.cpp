//sum of 1st n natural numbers
#include<iostream>
using namespace std;
int sum(int n);
int main()
{
    cout<<"Enter the number of terms:-";
    int n;
    cin>>n;
    cout<<"\n"<<sum(n);
}
int sum(int p)
{
    int sum=0;
    for(int i=1; i<=p; i++)
    {
        sum=sum+i;
        if(i==p)
        cout<<i;
        else
        cout<<i<<" + ";
    }
    return sum;
}