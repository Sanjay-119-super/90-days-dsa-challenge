#include<iostream>
using namespace std;

int main()
{
    int num=13, rem,ans=0,mul=1;
    int i=1;
    while(num>0)
    {
        rem=num%8;
        num/=8;
        ans=rem * mul + ans;
        mul=mul*10;
       
        i++;
    }
    cout<<ans;

    
   
}