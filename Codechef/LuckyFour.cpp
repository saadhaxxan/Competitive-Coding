#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve();

int main()
{

	solve();
}

void solve()
{
	ll int t;
	cin >> t;
	while (t--)
	{
		ll int n;
		ll int rem = 0, sum = 0;
		cin >> n;
		while (n > 0)
		{
			rem = n % 10;
			n = n / 10;
			if (rem == 4)
			{
				sum += 1;
			}
		}
		cout << sum << endl;
	}

}