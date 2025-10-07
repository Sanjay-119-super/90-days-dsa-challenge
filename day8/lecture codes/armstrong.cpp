#include<iostream>
#include <cmath>
using namespace std;

bool armstrong(int num, int digit)
{
    int n=num,rem, ans=0;
    while(n)
    {
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digit);
    }
    if(ans==num)
        return 1;
    else
        return 0;    
}


int count(int num)
{
    int count=0;
    while(num)
    {
        count++;
        num/=10;
    }
    return count;
}


int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int digit = count(num);
    cout<<armstrong(num,digit);
}