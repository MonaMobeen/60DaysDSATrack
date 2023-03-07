// Header files for C++ Programs.
#include <bits/stdc++.h>
using namespace std;

/* A function to calculate maximum sum of subarray
of size m in an array of size n using sliding window technique.
*/
int findMaximumSum(int arr[], int n, int m)
{

// calculate the sum of first m elements of that array
// and store that sum in a variable named running_sum.
	int max_result = 0;
	for (int i = 0; i < m; i++)
		max_result += arr[i];

	// Calculate sum of the remaining windows by
	// summing up the next element subtracting the
	// previous element.
	int running_sum = max_result;
	for (int i = m; i < n; i++) {
		running_sum = running_sum + (arr[i] - arr[i - m]);
		max_result = max(max_result, running_sum);
	}

	return max_result;  
}

int main()
{
	int n = 5;
	int arr[n] = { 10, 20, 10, 30, 5 };
	int m = 3;
    int answer = findMaximumSum(arr, n, m);
    cout<<answer;
	return 0;
}
