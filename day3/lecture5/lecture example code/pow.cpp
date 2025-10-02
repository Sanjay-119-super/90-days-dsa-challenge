#include<iostream>
using namespace std;

int main()
{
   int n, pow; // 5^4 = 5*5*5*5=5*5=25*5=125*5=625
   cout<<"Enter a number: ";
   cin>>n;

   cout<<"Enter the power: ";
   cin>>pow;
   int num=n;//num=5 

   for(int i=1; i<pow; i++)
   {
    num=num*n;
    
   }
   cout<<"Pow: " <<num;
}