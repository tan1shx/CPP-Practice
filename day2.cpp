#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 1st no: ";
    cin>>a;
    cout<<"Enter 2nd no: ";
    cin>>b;
    cout<<"Enter 3rd no: ";
    cin>>c;
    if (a>b && a>c)
        cout<<a<<" is the largest number";
    else if (b>c)
        cout<<b<<" is the largest number";
    else
        cout<<c<<" is the largest number";
    return 0;   
}
