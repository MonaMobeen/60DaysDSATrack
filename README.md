# 60DaysDSATrack
A repo having DSA PROB SOLVING Challenges in upcoming 60 Days!
Problem Solving in dsa
# Problems:
[Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)


# What is HashTable?
A HashTable is a data structure that stores key-value pairs using a hashing function. It is designed to efficiently search for, insert, and delete data based on the key. The hash function maps each key to a unique index in an array, called a hash table. The value associated with a key is stored at that index. When searching for a value, the hash function is used to find the index in the hash table where the value is stored, which allows for constant-time access to the value.

HashTables are widely used in computer science and are used in a variety of applications such as databases, compilers, and routers. They are particularly useful when dealing with large amounts of data and require fast lookups. However, there are potential issues with HashTables, such as collisions (when multiple keys map to the same index), which can degrade performance. To address this issue, various collision resolution techniques can be used, such as chaining (where multiple values with the same index are stored in a linked list) or open addressing (where the search continues to probe for an empty slot in the hash table).

In this implementation, the Hashtable class has an array of linked lists (table) and a hash function to generate an index for a key. When a key-value pair is added, the key is hashed to get the index, and the value is inserted at the head of the linked list at that index.

Linear probing: In linear probing, when a collision occurs, the algorithm searches for the next available slot in the hash table by probing the slots one by one until it finds an empty slot. The slots are probed in a linear sequence, which means that the algorithm checks the next slot after the current slot until it finds an empty slot. This technique is easy to implement and can have good cache performance, but it can suffer from clustering, where items tend to cluster together in certain parts of the table.

### 1.2 Double hashing: 
In double hashing, when a collision occurs, the algorithm uses a secondary hash function to calculate an offset value that is added to the original hash index to find the next available slot. The offset value is calculated using a different hash function than the primary hash function, which helps to reduce clustering and improve performance. However, finding a good secondary hash function can be difficult, and the technique can still suffer from clustering if the hash functions are poorly chosen.

### Chaining 
Chaining is another technique for resolving collisions in hash tables. In chaining, instead of storing items directly in the hash table, we use a linked list to store all the items that hash to the same index. When a collision occurs, the algorithm simply adds the new item to the end of the linked list at the appropriate index.

# Memoization + recursion:

### 
Memoisation: is an optimization technique used primarily to speed up computer programs by storing the results of expensive function calls and returning the cached result when the same inputs occur again.

###
Recursion: in data structure is when a function calls itself indirectly or directly, and the function calling itself is known as a recursive function. It's generally used when the answer to a larger issue could be depicted in terms of smaller problems.

# Sliding Window:

### Sliding Window Algorithm is a technique for reducing the complexity of algorithms. It is used such that the need for reusing the loops gets reduced and hence the program gets optimized. In this technique, we reuse the result of the previous step to compute the result of the next step.



# Basic Steps to Solve Sliding Window Problems:
### Find the size of the window on which the algorithm has to be performed.
### Calculate the result of the first window, as we calculate in the naive approach.
### Maintain a pointer on the start position.
### Then run a loop and keep sliding the window by one step at a time and also sliding that pointer one at a time, and keep track of the results of every window.



 
### Example:

int findMaximumSum(int arr[], int n, int m)
{
	int max_result = INT_MIN;

	for (int i = 0; i <= n - m ; i++) {
		int running_sum = 0;
        for (int j = i; j < i+m && j < n; j++)
            running_sum = running_sum + arr[j];
            
		// Update the max_result variable.
		max_result = max(running_sum, max_result);
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
