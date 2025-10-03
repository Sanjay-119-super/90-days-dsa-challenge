#include<iostream>
using namespace std;

/*
Day 10/180: Pattern Printing-2


Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
            A
          B B
        C C C
      D D D D
    E E E E E
      


*/

int main()
{
    int n;
    cout<<"Enter n input: ";
    cin>>n;
    for(int row=1; row<=n; row++)
    {
        char c='A'+(row-1);
        for(int col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        for(int col=1; col<=row; col++)
        {
           
            cout<<c <<" ";
        }
        cout<<endl;

    }
}