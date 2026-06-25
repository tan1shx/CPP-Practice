#include <iostream>
using namespace std;
//for multiplication table
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i<=10; i++)
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
//for sum of n natural numbers
    int sum=0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        sum=sum+i;
        
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
//factors of a number and counting its number of factors
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)

        {
            cout << i << " ";
            count++;
        }
    }
    cout << "\nNumber of factors of " << n << " is: " << count << endl;
}