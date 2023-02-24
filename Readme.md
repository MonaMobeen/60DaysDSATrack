# Problem Solving in dsa 
# What is HashTable?
A HashTable is a data structure that stores key-value pairs using a hashing function. It is designed to efficiently search for, insert, and delete data based on the key. The hash function maps each key to a unique index in an array, called a hash table. The value associated with a key is stored at that index. When searching for a value, the hash function is used to find the index in the hash table where the value is stored, which allows for constant-time access to the value.

HashTables are widely used in computer science and are used in a variety of applications such as databases, compilers, and routers. They are particularly useful when dealing with large amounts of data and require fast lookups. However, there are potential issues with HashTables, such as collisions (when multiple keys map to the same index), which can degrade performance. To address this issue, various collision resolution techniques can be used, such as chaining (where multiple values with the same index are stored in a linked list) or open addressing (where the search continues to probe for an empty slot in the hash table).



 In this implementation, the Hashtable class has an array of linked lists (table) and a hash function to generate an index for a key. When a key-value pair is added, the key is hashed to get the index, and the value is inserted at the head of the linked list at that index. 