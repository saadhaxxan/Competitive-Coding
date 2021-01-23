#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    string str = "";
    if (n <= 3 && n > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        else
        {
            str += to_string(i) + " ";
        }
    }

    cout << str;
}