#include<iostream>
using namespace std;

int  main()
{

    int row,col;
    int n;
    cout<<"Enter n input: ";
    cin>>n;
    for(row=n; row>=1; row--)
    {
        //space
        for(col=0; col<n-row; col++)
        {
            //star
            cout<<" ";
        }
        for(col=0; col<row*2-1; col++)
            {
                cout<<"*";
            }
            
            cout<<endl;
    }
}