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
	ll int k, n, w, total = 0;
	cin >> k >> n >> w;

	for (int i = 1; i <= w; i++) {
		total += i * k;
	}
	if (total < n) {
		cout << 0 << endl;
	}
	else {
		cout << total - n << endl;
	}



}