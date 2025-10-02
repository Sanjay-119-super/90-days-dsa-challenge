#include<iostream>
using namespace std;

int main()
{
    int last=0, pre=1, current,n;

    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        current=pre+last;
        last=pre;
        pre=current;;
    }
    cout<<"nth fibbo: "<<current;
}