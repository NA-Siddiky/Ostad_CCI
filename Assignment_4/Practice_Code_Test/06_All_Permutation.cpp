#include <iostream>
#include <algorithm>
using namespace std;

void permute(string str, int left, int right)
{
    // Base case: if all characters have been fixed, print the permutation
    if (left == right)
    {
        cout << str << endl;
        return;
    }

    // Recursive case: fix each character in the current position and permute the remaining characters
    for (int i = left; i <= right; i++)
    {
        // Swap the current character with the character at the left index
        swap(str[left], str[i]);

        // Recursively permute the remaining characters
        permute(str, left + 1, right);

        // Undo the swap to restore the original order of characters
        swap(str[left], str[i]);
    }
}

int main()
{
    string str;
    cin >> str;

    // Sort the string to ensure lexicographically increasing order
    sort(str.begin(), str.end());

    permute(str, 0, str.length() - 1);

    return 0;
}