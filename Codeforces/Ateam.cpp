#include <iostream>
#include <string>

using namespace std;
int main()
{
    int N, sum = 0, count = 0;
    int participants[3];
    cin >> N;
    while (N-- > 0)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> participants[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (participants[i] == 1)
            {
                sum++;
            }
        }
        if (sum >= 2)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}