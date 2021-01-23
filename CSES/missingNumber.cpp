#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int numbers;
        cin >> numbers;
        sum += numbers;
    }
    // sum of first n natural numbers is n*(n-1)/2
    // by arithematic progression

    cout << n * (n + 1) / 2 - sum;
}