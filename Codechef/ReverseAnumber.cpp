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
	ll int n, rev = 0, rem;
	cin >> n;

	while (n > 0) {
		rem = n % 10;
		rev = (rev * 10) + rem;
		n = n / 10;
	}
	cout << rev << endl;
}