#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,3,5,2,6};

    //all rounds
    for(int i=0; i<5; i++)
    {
        int index=i;
        // swap 
        for(int j=i+1; j<5; j++)
        {
            if(arr[j]<arr[index])
                index=j;
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0; i<6; i++)
    {
        cout<<arr[i] <<" ";
    }
}