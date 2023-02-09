#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    // cin >> n;

    while (n > 0)
    {
        int cube = n * n * n;
        cout<<cube+cube+cube;
        n = n - 1;
        
    }

    return 0;
}