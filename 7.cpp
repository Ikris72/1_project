// decimal to hexamdecimal
#include<iostream>
using namespace std;
string decimal_to_hexadecimal(int n);
int main()
{
    cout<<"Enter any number to obtain its hexadecimal form ";
    int n;
    cin>>n;
    cout << decimal_to_hexadecimal(n);
}
string decimal_to_hexadecimal(int p)
{
   int x=1;
   string ans="";
   while(x<=p)
   {
    x*=16;
   }
   x/=16;
   while(x>0)
   {
    int lastdigit = p/x;
    p-=lastdigit*x;
    x/=16;
    if(lastdigit <= 9)
    {
        ans = ans + to_string(lastdigit);
    }
    else
    {
        char c = 'A' + lastdigit - 10;
        ans.push_back(c);
    }
   }
   return ans;
}
