

#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

// Default main function
int main()
{
    int n;
    cin >> n;
    cout << "Reversed number: " << reverseNumber(n) << endl;

    return 0;
}
