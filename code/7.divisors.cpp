#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n)
{
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
    return v;
}

// Default main function
int main()
{
    int n1;
    cin >> n1;
    for (int i : divisors(n1))
        cout << i << " ";

    return 0;
}
