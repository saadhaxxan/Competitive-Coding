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
	ll int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + size);
	ll int t = (n * (n + 1)) / 2;
	int j = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > j) {
			cout << "Second" << endl;
			break;
		}
		j++;
	}
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	sum = t - sum;
	if (sum <= 0 || sum % 2 == 0) {
		cout << "Second" << endl;
	}
	else {
		cout << "First" << endl;
	}
}





// # Online Python compiler (interpreter) to run Python online.
// # Write Python 3 code in this online editor and run it.
// T = int(input())
// for i in range(T):
//     n = int(input())
//     a = [int(x) for x in input().split()]
//     a.sort()
//     t = (n*(n+1))/2
//     j = 1
//     for k in a:
//         if k>j:
//             print("Second")
//             break
//         j+=1
//     else:
//         c = sum(a)
//         c = t-c
//         if c<=0 or c%2==0:
//             print("Second")
//         else:
//             print("First")
