#include <bits/stdc++.h>
using namespace std;

int NnumbersSum(int N){
			//your code goes here
            int sum = 0;
            while(N>=0){
                sum+=N;
                N--;
            }
            return sum;
		}

// Default main function
int main()
{
    int n1;
    cin >> n1;
    cout << NnumbersSum(n1) << endl;

    return 0;
}
