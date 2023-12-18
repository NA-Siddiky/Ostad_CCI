#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    string str;
    getline(cin, str);

    int max_freq = 0;
    char max_char = 'a';
    unordered_map<char, int> char_freq;
    for (char c : str)
    {
        char_freq[c]++;
    }

    for (auto const &pair : char_freq)
    {
        if (pair.second > max_freq || (pair.second == max_freq && pair.first < max_char))
        {
            max_freq = pair.second;
            max_char = pair.first;
        }
    }

    cout << max_char << " " << max_freq << endl;

    return 0;
}
