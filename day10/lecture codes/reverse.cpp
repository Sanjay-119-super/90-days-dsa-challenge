#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,3,4,5,1};
    int start=0, end=5;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}