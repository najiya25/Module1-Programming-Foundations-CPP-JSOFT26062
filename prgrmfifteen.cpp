#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if (marks<0||marks>100)
        cout<<"invalid";
    else if (marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}