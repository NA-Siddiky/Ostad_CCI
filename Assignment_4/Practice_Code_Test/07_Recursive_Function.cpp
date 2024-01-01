#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> memo;

long long recursiveFunction(long long N)
{
    // Base case: f(0) = 1
    if (N == 0)
        return 1;

    // Check if the result is already memoized
    if (memo.find(N) != memo.end())
        return memo[N];

    // Recursive case: f(N) = f(N/2) + f(N/3)
    long long result = recursiveFunction(N / 2) + recursiveFunction(N / 3);

    // Memoize the result for future use
    memo[N] = result;

    return result;
}

int main()
{
    long long N;
    cin >> N;

    long long result = recursiveFunction(N);
    cout << result << endl;

    return 0;
}