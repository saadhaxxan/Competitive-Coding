#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string str;
    int count = 0, answer = 1;
    cin >> str;
    char l = 'A';
    for (char c : str)
    {

        if (l == c)
        {
            count++;
            answer = max(count, answer);
        }
        else
        {
            l = c;
            count = 1;
        }
    }

    cout << answer;
}