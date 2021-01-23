#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int spiral[5][5] = {{1, 2, 9, 10, 25}, {4, 3, 8, 11, 24}, {5, 6, 7, 12, 23}, {16, 15, 14, 13, 22}, {17, 18, 19, 20, 21}};
    int t;
    cin >> t;
    int row, col;
    while (t--)
    {
        cin >> row >> col;
        cout << spiral[row - 1][col - 1];
    }

    // for (int i = 0; i < 5; ++i)
    // {
    //     for (int j = 0; j < 5; ++j)
    //     {
    //         cout << "numbers[" << i << "][" << j << "]: " << spiral[i][j] << endl;
    //     }
    // }
}