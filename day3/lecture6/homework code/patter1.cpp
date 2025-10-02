#include<iostream>
using namespace std;

/*
First Pattern:

       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4  
       4 4 4 4 4 4
       4 4 4 4 4 4 

*/

int main()
{
    for(int row=1; row<=5; row=row+1)
    {
        for(int i=1; i<=5; i++){
            cout<<"4 ";
        }
        cout<<endl;
    }

}