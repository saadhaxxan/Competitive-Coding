#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int N, sum = 0, score, count = 0;
    cin >> N >> score;
    int participants[N];
    for (int i = 0; i < N; i++)
    {
        cin >> participants[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (participants[i] >= participants[score - 1] && participants[i] > 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}