#include <iostream>
#include <algorithm>
using namespace std;

void generateSubsets(string str, string subset, int index)
{
    // Base case: if we have processed all characters of the string
    if (index == str.length())
    {
        // Print the subset if it is non-empty
        if (!subset.empty())
        {
            cout << subset << endl;
        }
        return;
    }

    // Exclude the current character and generate subsets
    generateSubsets(str, subset, index + 1);

    // Include the current character and generate subsets
    subset.push_back(str[index]);
    generateSubsets(str, subset, index + 1);

    // Backtrack by removing the current character from the subset
    subset.pop_back();
}

int main()
{
    string str;
    cin >> str;

    // Sort the string to ensure lexicographically increasing order
    sort(str.begin(), str.end());

    string subset = "";
    generateSubsets(str, subset, 0);

    return 0;
}