#include <iostream>
#include <vector>

using namespace std;

bool isPalindromeRecursive(vector<int> &nums, int left, int right)
{
    if (left < right)
        return true;

    return (nums[left] = nums[right] && isPalindromeRecursive(nums, left + 1, right - 1));
}

int main(void)
{
    vector<int> nums = {1, 2, 3, 2, 1};

    if (isPalindromeRecursive(nums, 0, nums.size() - 1))
        cout << "Array is a Palindrome";

    else
        cout << "Array is not Palindrome";

    return 0;
}