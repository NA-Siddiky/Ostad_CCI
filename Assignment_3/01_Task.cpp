#include <iostream>
#include <string>
#include <vector>

using namespace std;

string shufflingString(const string &s, const vector<int> &indices)
{
    if (s.size() != indices.size())
    {
        return "";
    }

    string shuffled(s.size(), ' ');
    for (int i = 0; i < s.size(); ++i)
    {
        shuffled[indices[i]] = s[i];
    }
    return shuffled;
}

int main()
{
    string inputString;
    vector<int> shuffleIndices;

    getline(cin, inputString);

    int index;
    while (cin >> index)
    {
        shuffleIndices.push_back(index);
    }

    string shuffledString = shufflingString(inputString, shuffleIndices);
    if (shuffledString.empty())
    {
        return 1;
    }
    cout << shuffledString << endl;

    return 0;
}
