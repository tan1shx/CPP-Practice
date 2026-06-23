#include <iostream>
using namespace std;

int main() 
{
    int a=4, b=18,c;
    cout<<"Enter a  no: ";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<"not working hours";
    }
    else if (b>a && b>c)
    {
        cout<<" working hours";
    }
    else
    {
        cout<<"notworking hours";
    } 

    return 0;
}
