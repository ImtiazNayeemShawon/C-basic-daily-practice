#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n; // input a number suppose 2

    while (n > 0)
    {
        cout << n;
        n = n - 1;
    }

    return 0;
}