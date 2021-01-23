#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    int mx = 0;
    ll int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        mx = max(num, mx);
        ans += mx - num;
    }
    cout << ans;
}