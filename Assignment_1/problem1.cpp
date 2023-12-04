#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1;
    cin >> n;

    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout << factorial << endl;
    }
    else
    {
        cout << "Wrong input" << endl;
    }

    return 0;
}
