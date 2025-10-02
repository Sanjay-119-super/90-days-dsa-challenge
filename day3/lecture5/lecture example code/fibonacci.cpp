#include<iostream>
using namespace std;

int main()
{
    long n;
    cout<<"Enter a number: ";
    cin>>n;
    int last=0, pre=1 ,cur;
    //cout<<last <<" " <<pre <<" ";
    
    for(int i=2; i<=n; i++)
    {
         cur=last+pre;
        
        last=pre;
        pre=cur;
    }
    cout<<cur <<" ";
   
}