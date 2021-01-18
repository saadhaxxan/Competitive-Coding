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
    long long int sum = 0, sum3 = 0, N, terms3, terms5, sum5, terms15, sum15;

    // Arithmetic Progression
    // = N/2 (2a+(N-1)*d)
    // N = (N-1)/N
    // a = first
    while (T--)
    {
        cin >> N;
        terms3 = ((N - 1) / 3);
        sum3 = (terms3 * (2 * 3 + (terms3 - 1) * 3)) / 2;

        terms5 = ((N - 1) / 5);
        sum5 = (terms5 * (2 * 5 + (terms5 - 1) * 5)) / 2;

        terms15 = ((N - 1) / 15);
        sum15 = (terms15 * (2 * 15 + (terms15 - 1) * 15)) / 2;

        print(sum3 + sum5 - sum15);
    }
}
