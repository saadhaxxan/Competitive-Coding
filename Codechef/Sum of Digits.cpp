#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve();

int main()
{
	ll int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}

void solve()
{
	ll int n, sum = 0;
	cin >> n;

	while (n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	cout << sum << endl;
}