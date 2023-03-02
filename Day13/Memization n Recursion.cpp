#include <iostream>
#include <vector>

using namespace std;

int fibonacci(vector<int> &memo, int n)
{
    if (memo[n] != -1)
    {
        return memo[n];
    }

    int result;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        result = fibonacci(memo, n - 1) + fibonacci(memo, n - 2);
    }

    memo[n] = result;
    return result;
};

int main(void)
{
    int n = 10;
    vector<int> memo(n + 1, -1);
    cout << fibonacci(memo, n);

    return 0;
}