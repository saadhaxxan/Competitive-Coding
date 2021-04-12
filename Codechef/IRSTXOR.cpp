#include <bits/stdc++.h>
#include <bitset>

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
	ll int c, s = 0, m = 1;
	cin >> c;
	while (c >= s) {
		s = pow(2, m);
		m++;
	}
	ll int A = pow(2, m - 2) - 1;
	ll int sum = s - c;
	ll int ans = A * (A + sum);
	cout << ans << endl;

}

