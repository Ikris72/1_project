//conversion of binary to decimal
#include<iostream>
using namespace std;
int binary_to_decimal(int n);
int main()
{
    int n;
    cout<<"Enter any binary number:-\n";
    cin>>n;
    cout<<binary_to_decimal(n);
}
int binary_to_decimal(int p)
{
    int ans=0;
    int x=1;
    while(p>0)
    {
        int last_digit = p%10;
        ans += x*last_digit;
        x *= 2;//simillarly if octadecimal is asked the just multiply by 8 (8 instead of 2)
        p /= 10;
    }
    return ans;
}