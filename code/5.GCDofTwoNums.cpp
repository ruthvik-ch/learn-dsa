#include <bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2)
{
    int i = n1;

    while (i >= 1)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
        i--;
    }
}

// Default main function
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    ;
    cout << GCD(n1, n2) << endl;

    return 0;
}
