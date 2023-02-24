#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a node for the linked list
struct Node {
    string key;
    int value;
    Node* next;
};

// Define the Hashtable class
class Hashtable {
private:
    vector<Node*> table;  // The array for storing the linked lists
    int size;             // The size of the hashtable
    int hash(string key); // A hash function to generate an index for a key

public:
    Hashtable(int size);           // Constructor
    ~Hashtable();                  // Destructor
    void put(string key, int val); // Add or update a key-value pair
    int get(string key);           // Get the value for a key, or -1 if not found
    void remove(string key);       // Remove a key-value pair
};

Hashtable::Hashtable(int size) {
    this->size = size;
    table.resize(size);
}

Hashtable::~Hashtable() {
    for (int i = 0; i < size; i++) {
        Node* current = table[i];
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
}

int Hashtable::hash(string key) {
    int index = 0;
    for (char c : key) {
        index += (int) c;
    }
    return index % size;
}

void Hashtable::put(string key, int val) {
    int index = hash(key);
    Node* current = table[index];
    while (current != NULL) {
        if (current->key == key) {
            current->value = val;
            return;
        }
        current = current->next;
    }
    Node* new_node = new Node {key, val, NULL};
    new_node->next = table[index];
    table[index] = new_node;
}

int Hashtable::get(string key) {
    int index = hash(key);
    Node* current = table[index];
    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }
    return -1;
}

void Hashtable::remove(string key) {
    int index = hash(key);
    Node* current = table[index];
    Node* prev = NULL;
    while (current != NULL) {
        if (current->key == key) {
            if (prev == NULL) {
                table[index] = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

int main() {
    Hashtable ht(10);
    ht.put("apple", 5);
    ht.put("banana", 7);
    ht.put("orange", 9);

    cout << "apple: " << ht.get("apple") << endl;
    cout << "banana: " << ht.get("banana") << endl;
    cout << "orange: " << ht.get("orange") << endl;

    ht.remove("banana");
    cout << "banana: " << ht.get("banana") << endl;

    return 0;
}
