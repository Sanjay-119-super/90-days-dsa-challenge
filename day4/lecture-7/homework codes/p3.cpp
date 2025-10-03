#include<iostream>
using namespace std;

/*
Third Pattern:
     
       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15



*/

int main()
{
    int row,col;
    for(row=10; row<=15; row=row+1)
    {

        
        for(col=10; col<=row; col=col+1)
        {
           
            cout<<col <<" ";
        }
        cout<<endl;
    }
}