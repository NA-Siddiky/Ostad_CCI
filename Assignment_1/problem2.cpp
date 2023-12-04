#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    cin >> a >> b;

    int smaller = min(a, b);
    int larger = max(a, b);

    sum = 0;
    if (smaller > larger)
    {
        for (int i = 0; i <= larger; i++)
        {
            sum += i;
        }
    }
    else
    {
        for (int i = smaller; i <= larger; i++)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
