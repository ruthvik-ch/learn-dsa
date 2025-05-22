#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n)
{
    unordered_map<int, int> fr;

    for (int i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }

    for (auto it : fr)
    {
        cout << "Element -" << it.first << " | Count -" <<  it.second<< endl;
    }

    return 0;
}

// Default main function
int main()
{
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    count(arr, n);

    return 0;
}
