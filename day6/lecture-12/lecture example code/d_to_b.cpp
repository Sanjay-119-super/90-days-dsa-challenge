#include<iostream>
using namespace std;

int main()
{
    // int num=13, rem,ans=0,mul=1;
    // int i=1;
    // while(num>0)
    // {
    //     rem=num%2;
    //     num/=2;
    //     ans=rem * mul + ans;
    //     mul=mul*10;
       
    //     i++;
    // }
    // cout<<ans;

     int num=13, rem,ans=0,mul=1;
    int i=1;
    while(num>0)
    {
        rem=num&1;
        num=num>>1;
        ans=rem * mul + ans;
        mul=mul*10;
       
        i++;
    }
    cout<<ans;
}