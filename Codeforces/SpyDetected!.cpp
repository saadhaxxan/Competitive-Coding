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
	int n;
	cin >> n;
	int arr[n];
	int ind = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int single = arr[1];
	for (int i = 2; i <= n; i++) {
		if (single != arr[i]) {
			ind = i;
		}
	}
	cout << ind << endl;
}
