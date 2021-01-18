#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int N;
    cin >> N;
    string s;
    int x = 0;
    while (N--)
    {
        cin >> s;
        const char plus = '+';
        if (s[1] == plus)
        {
            x = x + 1;
        }
        else
        {
            x = x - 1;
        }
        }
    cout << x;
    return 0;
}