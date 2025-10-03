#include<iostream>
using namespace std;

/*
Day 10/180: Pattern Printing-2



Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


            E
          E D
        E D C
      E D C B
    E D C B A
      





*/

int main()
{
    int n;
    cout<<"Enter n input: ";
    cin>>n;
    for(int row=1; row<=n; row++)
    {
        
        for(int col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        for(int col=1; col<=row; col++)
        {
           char c='E' - (col-1);
            cout<<c <<" ";
        }
        cout<<endl;

    }
}