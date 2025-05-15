#include <bits/stdc++.h>
using namespace std;

int checkArmstrong(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += pow(n % 10, 3);
        n = n / 10;
    }
    cout << "sum: " << sum << endl;
    cout << "n: " << n << endl;
    return (sum == n);
}

// Default main function
int main()
{
    int n1;
    cin >> n1;
    cout << checkArmstrong(n1) << endl;

    return 0;
}
