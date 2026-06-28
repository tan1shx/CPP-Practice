#include <iostream>
using namespace std;

int main( )
{
    int a = 9;
    int *p=&a;
//*p ko dereference operator kehte hai, iska use pointer ke address par jaake uske value ko access karne ke liye kiya jata hai.
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The value of p is: "<<p<<endl;
    cout<<"The address of p is: "<<&p<<endl;
    cout<<"The value pointed to by p is: "<<*p<<endl;
     p= new int[5]; // dynamically allocated array of 5 integers
     p[0] = 1;
     p[1] = 23;
     cout << "The value of p[0] is: " << p[0] << endl;
     cout << "The value of p[2] is: " << p[2]<<endl; // This will print garbage value as p[2] is uninitialized
     delete[] p; // free the dynamically allocated memory
     p=nullptr; // set pointer to nullptr after deletion
    return 0;
}