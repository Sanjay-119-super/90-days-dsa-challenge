#include<iostream>
using namespace std;
char conver(char name)
{
    char ans=name-'a'+'A';
    return ans;
}



int main()
{
    char ch;
    cout<<"Enter a char...";
    cin>>ch;
    cout<<conver(ch);
    
}