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

	int A[t];
	for (int i = 0; i < t; i++) {
		scanf("%d", &A[i]);
	}

	sort(A, A + t);
	for (int i = 0; i < t; i++) {
		printf("%d\n", A[i]);
	}
}