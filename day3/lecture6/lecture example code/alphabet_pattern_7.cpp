#include<iostream>
using namespace std;

int main()
{
    // for(char row='a'; row<='e'; row=row+1)
    // {
    //     for(int col=1; col<=5; col++)
    //     {
    //         cout<<row <<" ";
    //     }
    //     cout<<endl;
    // }

    for(int row=1; row<=5; row=row+1)
    {
        char ch ='a' + (row-1);
        for(int col=1; col<=5; col++)
        {
            cout<<ch <<" ";
        }
        cout<<endl;
    }
}