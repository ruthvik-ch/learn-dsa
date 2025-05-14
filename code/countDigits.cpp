#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        while (n > 0)
        {

            n = n / 10;
            count++;
        }
        return count;
    }
}

// Default main function
int main()
{
    int n;
    cin >> n;
    cout << "No of digits: " << countDigit(n) << endl;

    return 0;
}
