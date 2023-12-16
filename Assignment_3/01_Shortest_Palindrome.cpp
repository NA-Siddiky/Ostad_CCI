#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

string shortestPalindrome(string str)
{
    int n = str.length();
    int P[n];

    // Build P array (longest palindromic substring lengths centered at each index)
    int i = 0, j = 1, c = 0, r = 0;
    while (i < n)
    {
        // Expand the potential palindrome centered at i
        while (i - j >= 0 && i + j < n && str[i - j] == str[i + j])
        {
            ++j;
        }
        P[i] = j; // Store the length of the longest palindrome centered at i

        // Optimization: Utilize values from previous indices for efficiency
        c = i + 1;
        r = j - 1;
        while (c + P[c] < r)
        {
            P[i] = P[c]; // Update P[i] based on previous calculations
            ++i;
            ++c;
        }
        i += P[i]; // Skip processed palindrome
        j = 1;     // Reset loop variables
    }

    // Find longest palindrome suffix (reversed substring that matches the end of the original string)
    int max_suffix_len = 0;
    int max_suffix_index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (P[i] > max_suffix_len && i + P[i] == n)
        {
            // Update values if current palindrome is longer and a suffix
            max_suffix_len = P[i];
            max_suffix_index = i;
        }
    }

    // Build the shortest palindrome (reversed suffix prepended to the original string)
    string palindrome = str.substr(max_suffix_index - max_suffix_len + 1, max_suffix_len);
    reverse(palindrome.begin(), palindrome.end());
    return palindrome + str;
}

int main()
{
    string str;
    cin >> str;
    cout << shortestPalindrome(str) << endl;
    return 0;
}
