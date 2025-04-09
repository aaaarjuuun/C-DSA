#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number";
    cin>>num;

    if(num>0)
    {
        cout<<"positive";
    }
    else if(num==0)
    {
        cout<<"0";
    }
    else
    {
        cout<<"Negative";
    }
};