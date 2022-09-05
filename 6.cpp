//decimal to octal
#include<iostream>
using namespace std;
int decimal_to_octal(int n);
int main()
{
    cout<<"Enter any number to obtain its octal form ";
    int n;
    cin>>n;
    cout<<decimal_to_octal(n);
}
int decimal_to_octal(int p)
{
    int x=1;
    int ans=0;
    while(x<=p)
    {
        x*=8;
    }
    x/=8;
    while(x>0)
    {
          int lastdigit = p/x;
        p -= lastdigit*x;
        x/=8;
        ans = ans*10 + lastdigit;
    }  
    return ans;
}

