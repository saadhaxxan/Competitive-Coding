#include <iostream>
using namespace std;
template <typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        long long int N, fn = 2, fn_1 = 0, new_val = 0, sum = 0;
        cin >> N;

        while (fn < N)
        {
            sum += fn;
            new_val = 4 * fn + fn_1;
            fn_1 = fn;
            fn = new_val;
        }
        print(sum);
    }
}