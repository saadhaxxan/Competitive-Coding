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


	int widthdraw;
	float totalbalance, remaining_balance = 0;
	cin >> widthdraw >> totalbalance;
	if (widthdraw % 5 == 0) {
		if (widthdraw <= (totalbalance - 0.5))
		{
			remaining_balance = totalbalance - widthdraw - 0.5;
			printf("%.2f", remaining_balance);
		}
		else {
			printf("%.2f", totalbalance);
		}
	}

	else
	{
		printf("%.2f", totalbalance);
	}
}