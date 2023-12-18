#include <iostream>
#include <string>

using namespace std;

int strStr(const string &haystack, const string &needle)
{
    if (needle.empty())
    {
        return 0;
    }

    for (size_t i = 0; i <= haystack.size() - needle.size(); ++i)
    {
        if (haystack.substr(i, needle.size()) == needle)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string haystack, needle;

    getline(cin, haystack);

    getline(cin, needle);

    if (haystack.empty() || needle.empty())
    {
        return 1;
    }

    int index = strStr(haystack, needle);
    if (index == -1)
    {
        cout << "Output: -1" << endl;
    }
    else
    {
        cout << "Output: 0" << endl;
    }

    return 0;
}
