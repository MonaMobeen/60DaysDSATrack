#include <iostream>
using namespace std;

bool findNumBetweenRangeInArray(int A[], int num)
{
    for (int index = 1; index < 4; index++)
    {
        if (num == A[index])
        {
            cout << index;
        }
    }
    return -1;
};

int main()
{
    int A[] = {0, 1, 2, 3, 3, 3, 4}; 
    int integer = 4;
    findNumBetweenRangeInArray(A, integer);
    return 0;
}