#include <iostream>
#include <string>

using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N-- > 0)
    {
        string s;
        cin >> s;
        if (s.length() > 10)
        {
            int orglength = s.length();
            int newlength = orglength - 2;
            std::cout << s[0] + to_string(newlength) + s[orglength - 1];
            cout << endl;
        }
        else
        {
            cout << s;
        }
    }
    return 0;
}