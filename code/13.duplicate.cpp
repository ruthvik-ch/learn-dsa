#include <bits/stdc++.h>
using namespace std;

class DuplicateChecker
{
public:
    // Quick Oneliner Best
    bool hasDuplicate(vector<int> &nums)
    {
        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
    // better
    bool hasDuplicatev2(vector<int> &nums)
    {
        unordered_set<int> uset;

        for (int num : nums)
        {
            if (uset.count(num)) // .count will give 1 or 0 based on if ele is there or not
            {
                return true;
            }
            uset.insert(num);
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
