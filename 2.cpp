// to check wether the given triplet is pythagorian triplet or not
#include<iostream>
using namespace std;
int Pythagorous_triplet(int x, int y, int z);
int main()
{
    int  x, y, z;
    cout<<"Enter any three numbers:- ";
    cin>>x>>y>>z;
    int p = Pythagorous_triplet(x,y,z);
    if(p==1)
    cout<<"\n yes";
    else
    cout<<"\n No";
}
int Pythagorous_triplet(int a, int b, int c)
{
    if((a*a + b*b)==(c*c) ||(c*c + b*b)==(a*a) || (c*c + a*a)==(b*b) )
    {
        return 1;
    }
    else
    return 0;
}