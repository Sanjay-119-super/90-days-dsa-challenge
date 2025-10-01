#include<iostream>
using namespace std;

int main()
{

    //Print all Odd numbers from 1 to n, take n as an input from the user.

     int n;
    cout<<"Enter a number: ";
    cin>>n;


    for(int i=1; i<=n; i++)
    {
        if (i%2 !=0)
        {
            cout<<i << " ";
        }
        
    }
    return 0;
}