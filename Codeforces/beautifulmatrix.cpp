#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int matrix[5][5], row, col;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                row = i + 1;
                col = j + 1;
            }
        }
    }
    cout << row << endl;
    cout << col << endl;

    int steps = abs(row - 3) + abs(col - 3);

    cout << steps << endl;
}