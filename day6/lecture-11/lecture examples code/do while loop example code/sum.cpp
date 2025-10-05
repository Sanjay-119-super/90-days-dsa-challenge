#include<iostream>
using namespace std;

int main()
{

    int i=1,n=10,sum=0;
    do
    {
        sum+=i;
        i++;
    }while(i<=n);
    cout<<"Sum is : "<<sum;
    return 0;
}