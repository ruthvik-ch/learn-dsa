#include <bits/stdc++.h>
using namespace std;

class DuplicateChecker
{
public:
    // Quick Oneliner Best
    bool hasDuplicate(const vector<int> &nums)
    {
        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
    // better
    bool hasDuplicatev2(vector<int> &nums)
    {
        unordered_set<int> seen;

        for (int num : nums)
        {
            if (seen.count(num))
            {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }

    //  brute force is to check using 2 loops and compare
};

int main()
{
    DuplicateChecker checker;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 

    bool result = checker.hasDuplicate(nums);

    cout << (result ? "true" : "false") << endl;

    return 0;
}
