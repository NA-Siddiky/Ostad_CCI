#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSumAndMaxProfit(vector<int> &prices)
{
    unordered_map<int, int> seen;
    int minPrice = INT_MAX, maxProfit = 0;

    for (int i = 0; i < prices.size(); ++i)
    {
        if (seen.find(prices[i]) != seen.end())
        {
            return {seen[prices[i]], i};
        }
        seen[prices[i]] = i;

        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    if (!seen.empty())
    {
        return {seen.begin()->first, seen.begin()->second};
    }
    else if (minPrice != INT_MAX)
    {
        return maxProfit;
    }
    else
    {
        throw invalid_argument("No solution found");
    }
}

int main()
{
    vector<int> prices;
    int num;

    cout << "Enter the numbers: ";
    while (cin >> num)
    {
        prices.push_back(num);
    }

    try
    {
        vector<int> result = twoSumAndMaxProfit(prices);

        if (result.size() == 2)
        {
            cout << "Output: " << result[0] << " " << result[1] << endl;
        }
        else
        {
            cout << "Maximum profit: " << result << endl;
        }
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}
