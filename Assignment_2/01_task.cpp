// Include necessary libraries
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

using difference_type = long long;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); ++i)
    {
        difference_type complement = static_cast<difference_type>(target) - nums[i];

        if (seen.find(complement) != seen.end())
        {
            vector<int> result;
            result.push_back(seen[complement]);
            result.push_back(i);
            return result;
        }
        seen[nums[i]] = i;
    }

    throw invalid_argument("No two sum solution");
}

int main()
{
    vector<int> nums;
    int target;

    cout << "Enter the numbers: ";
    int num;
    while (cin >> num)
    {
        nums.push_back(num);
    }

    cout << "Enter the target: ";
    cin >> target;

    try
    {
        vector<int> result = twoSum(nums, target);
        for (int i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}
