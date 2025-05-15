#include <bits/stdc++.h>
using namespace std;

int fibanocci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibanocci(n-1)+fibanocci(n-2);
    }
}

// Default main function
int main()
{
    int n1;
    cin >> n1;
    cout << fibanocci(n1) << endl;

    return 0;
}
