#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Even Numbers: ";
    for(int i=1; i<=n; i++){
        if(i%2==0)  
            cout<<i << " "; 
    }
    cout<<"\n-----------------------\n";
    cout<<"Odd Numbers: ";
     for(int i=1; i<=n; i++){
        if(i%2!=0)  
            cout<<i << " "; 
    }
}