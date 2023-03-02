#include <iostream>
using namespace std;

class Solution
{
public:
    // Recursive approach for fibonacci
    int RecursiveFibonacci(int n)
    {
        if (n <= 1)
            return n;

        return RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2);
    }
};

int main(void)
{
    Solution S;
    int n = 5;
    cout << "\nFibonacci of " << n << " by Recursive approach = " << S.RecursiveFibonacci(n);

    return 0;
}