#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string reversed_str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed_str += str[i];
    }

    cout << reversed_str << endl;

    return 0;
}
