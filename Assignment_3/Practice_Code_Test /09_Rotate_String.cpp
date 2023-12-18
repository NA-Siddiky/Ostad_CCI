#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    string str;
    getline(cin, str);

    if (str.length() != 5)
    {
        cout << "Invalid string length. Please enter a string of length 5." << endl;
        return 0;
    }

    char first_char = str[0];
    string remaining_str = str.substr(1);

    string rotated_str = remaining_str + first_char;

    cout << rotated_str << endl;

    return 0;
}