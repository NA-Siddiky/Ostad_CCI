#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    // Check if the length is within the constraints
    if (s.length() < 1 || s.length() > 1000)
    {
        cout << "eNo" << endl;
        return 1;
    }

    // Check if the first character is lowercase
    if (!islower(s[0]))
    {
        cout << "No" << endl;
        return 0;
    }

    // Loop through remaining characters (starting from 2nd)
    for (int i = 1; i < s.length(); i += 2)
    {
        // Even positions should be uppercase
        if (!isupper(s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = 2; i < s.length(); i += 2)
    {
        // Odd positions should be lowercase
        if (!islower(s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
