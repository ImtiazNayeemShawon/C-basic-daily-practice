#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;//input a number suppose 2 

    int sum = 0; //define this int value which will increase
    for ( int counter= 1; counter <= n; counter++)
    {
        sum = sum + counter;
    }
    cout<<sum;
    return 0;
}