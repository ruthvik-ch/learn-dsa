#include <bits/stdc++.h>
using namespace std;


void reverseHelper(int arr[], int start, int end)
{
    if (start >= end)
        return;

    // Swap
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call
    reverseHelper(arr, start + 1, end - 1);
}
void reverse(int arr[], int n)
{
    reverseHelper(arr, 0, n - 1);
}


// Default main function
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
