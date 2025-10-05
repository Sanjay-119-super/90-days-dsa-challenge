#include<iostream>
using namespace std;

int main()
{

    int i=1,n=10;
    do
    {
        cout<<i <<" ";
        if(i==5)
            break; ///use of break
        i++;
    }while(i<=n);
    return 0;
}