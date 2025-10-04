#include<iostream>
using namespace std;

int  main()
{
    int row,col;
    for(row=1; row<=5; row++)
    {
        //space
        for(col=1; col<=row; col++)
        {
            //star
            cout<<"*";
        }
        for(col=1; col<=10-2*row; col++)
            {
                cout<<" ";
            }
        for(col=1; col<=row; col++)
        {
            //star
            cout<<"*";
        } 
               
            cout<<endl;
    }

    //---------------------
     for(row=4; row>=1; row--)
    {
        //space
        for(col=1; col<=row; col++)
        {
            //star
            cout<<"*";
        }
        for(col=1; col<=10-2*row; col++)
            {
                cout<<" ";
            }
        for(col=1; col<=row; col++)
        {
            //star
            cout<<"*";
        } 
               
            cout<<endl;
    }
}