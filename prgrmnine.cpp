#include<iostream>
using namespace std;
int main()
{
    double a,b;
    char op;
    cin>>a>>op>>b;
    switch(op)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            if(b==0)
                cout<<"Division by zero is not allowed";
            else
                cout<<a/b;
            break;
        default:
            cout<<"Invalid operator";
    }
}