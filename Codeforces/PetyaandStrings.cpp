#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{

    string n1;
    int result;
    string n2;
    cin >> n1;
    cin >> n2;
    transform(n1.begin(), n1.end(), n1.begin(), ::tolower);
    transform(n2.begin(), n2.end(), n2.begin(), ::tolower);

    if (n1 > n2)
    {
        result = 1;
    }
    else if (n1 < n2)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }

    cout << result << endl;
}