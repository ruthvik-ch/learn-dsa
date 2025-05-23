#include <bits/stdc++.h>
using namespace std;

class highLowFreq
{
public:
    int calc(vector<int> &v)
    {
        unordered_map<int, int> um;
        for (auto val : v)
        {
            um[val]++;
        };
        int high, low, lf = INT32_MAX, hf = INT32_MIN;
        for (auto val : um)
        {
            if (val.second > hf)
            {
                high = val.first;
                hf = val.second;
            }
            if (val.second < lf)
            {
                low = val.first;
                lf = val.second;
            }
            // cout<< val.first <<  " - " << val.second<< endl;
        }
        cout << hf << " - " << lf;
        return 0;
    };
};

int main()
{
    highLowFreq hlf;
    vector<int> nums = {1, 2, 9, 4, 5, 2, 3, 1, 8, 4, 3, 32, 3};
    hlf.calc(nums);
    return 0;
}