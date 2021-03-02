#include <iostream>
using namespace std;

#define ll long long


int main() {
	int t;
	cin >> t;
	while (t--) {
		int *A, i = 0;
		A = new int[100000000];
		ll int n;
		cin >> n;
		while (n > 0) {
			A[i] = n % 10;
			n = n / 10;
			i++;
		}
		cout << A[0] + A[i - 1] << endl;
	}
	return 0;
}

