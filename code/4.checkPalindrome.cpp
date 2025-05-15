#include <bits/stdc++.h>
using namespace std;

int isPalindrome(int n)
{
    int rev = 0;
    int ogNum = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    cout << "Reversed number: " << rev << ", " << ogNum << endl;
    return rev == ogNum;
}

// Default main function
int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n) << endl;

    return 0;
}
