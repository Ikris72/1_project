//decimal to binary
#include<iostream>
using namespace std;
int decimal_to_binary(int n);
int main()
{
    cout<<"Enter any number to obtain its binary form ";
    int n;
    cin>>n;
    cout<<decimal_to_binary(n);
}
int decimal_to_binary(int p)
{
    int x=1;
    int ans=0;
    while(x<=p)
    {
        x*=2;
    }
    x/=2;
    while(x>0)
    {
          int lastdigit = p/x;
        p -= lastdigit*x;
        x/=2;
        ans = ans*10 + lastdigit;
    }  
    return ans;
}