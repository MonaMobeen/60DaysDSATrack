#include <iostream>
using namespace std;

class Solution
{
public:
    // Iterative approach for fibonacci
    int IterativeFibonacchi(int n)
    {
        if (n == 0)
            return 0;

        int previousNumber = 0, currentNumber = 1, lastPreviousNumber;

        for (int i = 1; i < n; i++)
        {
            lastPreviousNumber = previousNumber;
            previousNumber = currentNumber;
            currentNumber = previousNumber + lastPreviousNumber;
        }

        return currentNumber;
    }
};

int main(void)
{
    Solution S;
    int n = 5;
    cout << "Fibonacci of " << n << " by Iterative approach = " << S.IterativeFibonacchi(n);

    return 0;
}