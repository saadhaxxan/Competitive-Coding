#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string name;
    int result, i;
    cin >> name;
    sort(name.begin(), name.end());
    for (i = 0; i < name.size(); i++)
    {
        if (name[i] != name[i + 1])
            result++;
    }
    if (result % 2 == 1)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}