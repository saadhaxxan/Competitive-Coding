#include <iostream>
using namespace std;
template <typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

int main()
{
    long long int N;
    long long int sum;
    cin >> N;
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            for (int j = 2; j <= N / 2; j++)
            {
                if (N % j != 0)
                {
                    print(j);
                }
            }
        }
    }
    // print(sum);
}
