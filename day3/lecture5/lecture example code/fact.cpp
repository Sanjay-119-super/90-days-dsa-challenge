#include<iostream>
using namespace std;

int main()
{
    long n, fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        fact*=i;
    }
    cout<<fact;
}