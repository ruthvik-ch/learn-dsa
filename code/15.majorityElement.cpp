#include <bits/stdc++.h>

using namespace std;

// My code
class BooyerAlgoTry
{
public:
    int findMajorityEle(vector<int> &nums)
    {
        unordered_map<int, int> umap;
        for (auto num : nums)
        {
            umap[num]++;
            if (nums.size() / 2 < umap[num])
                return num;
        }

        return 0;
    }
};

// Optimal
class BoyerMoore
{
public:
    int findMajorityElement(vector<int> &nums)
    {
        int candidate = -1;
        int count = 0;

        for (int num : nums)
        {
            if (count == 0)
            {
                candidate = num;
            }

            count += (num == candidate) ? 1 : -1;
        }

        return candidate; // Assumes majority element always exists
    }
};

int main()
{

    vector<int> nums = { 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2,};
    BooyerAlgoTry bTry;
    cout << bTry.findMajorityEle(nums);
    return 0;
}