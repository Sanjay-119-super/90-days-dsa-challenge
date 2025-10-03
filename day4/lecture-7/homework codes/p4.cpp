#include<iostream>
using namespace std;

/*
Fourth Pattern:

      A B C D
      A B C
      A B
      A



*/

int main()
{
    int row,col;
    for(row=1; row<=5; row=row+1)
    {

        
        for(col=1; col<=5-row; col=col+1)
        {
           char ch ='A'  + (col-1);
            cout<<ch <<" ";
        }
        cout<<endl;
    }
}