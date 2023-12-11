#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); ++i)
    {
        minPrice = min(minPrice, prices[i]);

        int currentProfit = prices[i] - minPrice;

        maxProfit = max(maxProfit, currentProfit);
    }

    return maxProfit;
}

int main()
{
    vector<int> prices;
    int num;

    cout << "Prices: ";
    while (cin >> num)
    {
        prices.push_back(num);
    }
    int maxProfit = maxProfit(prices);
    cout << "Output: " << maxProfit << endl;

    return 0;
}
