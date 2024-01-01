#include <iostream>
#include <vector>
using namespace std;

void generateStrings(int N, string current, char prev)
{
    // Base case: reached the desired length N
    if (current.size() == N)
    {
        cout << current << endl;
        return;
    }

    // Try appending each character 'a', 'b', 'c' to the current string
    for (char ch = 'a'; ch <= 'c'; ch++)
    {
        // Skip if the current character is the same as the previous character
        if (ch == prev)
            continue;

        // Recursively generate strings by appending the current character
        generateStrings(N, current + ch, ch);
    }
}

void printAllStrings(int N)
{
    generateStrings(N, "", '\0');
}

int main()
{
    int N;
    cin >> N;

    printAllStrings(N);

    return 0;
}