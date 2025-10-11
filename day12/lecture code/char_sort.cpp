#include<iostream>
using namespace std;

int main()
{
    char arr[6]={'c','a','d','a','b'};

    //all rounds
    for(char i=0; i<5; i++)
    {
        int index=i;
        // swap 
        for(int j=i+1; j<5; j++)
        {
            if(arr[j]>arr[index])
                index=j;
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0; i<6; i++)
    {
        cout<<arr[i] <<" ";
    }
}