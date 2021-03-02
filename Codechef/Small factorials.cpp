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
	ll int n, fact = 1;
	cin >> n;
	if (n == 0) cout << 1 << "\n";
	for (int i = n; i > 1; i--) {
		fact = fact * i;
	}
	cout << fact << endl;
}