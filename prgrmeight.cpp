#include<iostream>
using namespace std;
int main()
{
    int unit;
    double bill;
    cout<<"Enter the number of units consumed: ";
    cin>>unit;
    if(unit<=100)
    {
        bill=unit*5;
    }
    else if(unit<=200)
    {
        bill=100*5+(unit-100)*7;
    }
    else
    {
        bill=100*5+100*7+(unit-200)*10;
    }
    cout<<"Total bill: "<<bill<<endl;
}