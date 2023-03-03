# 60DaysDSATrack
A repo having DSA PROB SOLVING Challenges in upcoming 60 Days!
Problem Solving in dsa
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
