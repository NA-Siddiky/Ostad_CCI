#include <iostream>
using namespace std;

int factorial(int N)
{
    // Base case: f(0) = 1
    if (N == 0)
        return 1;

    // Recursive case: f(N) = N * f(N-1)
    return N * factorial(N - 1);
}

int main()
{
    int N;
    cin >> N;

    int result = factorial(N);
    cout << result << endl;

    return 0;
}