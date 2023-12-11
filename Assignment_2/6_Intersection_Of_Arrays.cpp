#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    set<int> s;
    vector<int> commonElements;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s.insert(num);
    }

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        if (s.count(num))
        {
            commonElements.push_back(num);
            s.erase(num);
        }
    }

    sort(commonElements.begin(), commonElements.end());

    cout << commonElements.size() << endl;
    for (int num : commonElements)
    {
        cout << num << " ";
    }

    return 0;
}