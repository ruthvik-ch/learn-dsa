#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // your code goes here
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Default main function
int main()
{
    int n1;
    cin >> n1;
    cout << isPrime(n1) << endl;

    return 0;
}
