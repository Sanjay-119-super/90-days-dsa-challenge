#include<iostream>
using namespace std;

int main()
{
    int row,col;
    for(row=1; row<=5; row=row+1)
    {
        
        for(col=5; col>=6-row; col=col-1)
        {
            cout<<col <<" ";
        }
        cout<<endl;
    }
}