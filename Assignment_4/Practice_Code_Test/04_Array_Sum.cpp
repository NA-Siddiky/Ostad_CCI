#include <iostream>
using namespace std;

int main()
{
    int S;
    cin >> S;

    int dp[S + 1];
    dp[0] = 1;

    for (int i = 1; i <= S; i++)
    {
        dp[i] = 0;
        for (int j = 1; j <= i; j++)
        {
            dp[i] += dp[i - j];
        }
    }

    cout << dp[S] << endl;

    return 0;
}