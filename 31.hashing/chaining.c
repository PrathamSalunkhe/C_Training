//this program is to understand the chaining method used in hashing 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// Node structure for linked list used in separate chaining
typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

// Hash table structure
typedef struct {
    Node* table[TABLE_SIZE];
} HashTable;

// Hash function: simple modulo hashing
int hash(int key) {
    return key % TABLE_SIZE;
}

// Function to create a new node
Node* createNode(int key, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a key-value pair into the hash table
void insert(HashTable* ht, int key, int value) {
    int index = hash(key);
    Node* newNode = createNode(key, value);

    if (ht->table[index] == NULL) {
        ht->table[index] = newNode;
    } else {
        Node* temp = ht->table[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to retrieve the value associated with a key from the hash table
int get(HashTable* ht, int key) {
    int index = hash(key);
    Node* temp = ht->table[index];
    while (temp != NULL) {
        if (temp->key == key) {
            return temp->value;
        }
        temp = temp->next;
    }
    return -1; // Key not found
}

int main() {
    HashTable ht;
    memset(&ht, 0, sizeof(HashTable)); // Initialize hash table to NULL

    // Insert key-value pairs into the hash table
    insert(&ht, 10, 100);
    insert(&ht, 20, 200);
    insert(&ht, 30, 300);
    insert(&ht, 11, 110); // Collision resolved by separate chaining
    insert(&ht, 12, 120); // Collision resolved by separate chaining

    // Retrieve values based on keys
    printf("Value associated with key 10: %d\n", get(&ht, 10));
    printf("Value associated with key 20: %d\n", get(&ht, 20));
    printf("Value associated with key 30: %d\n", get(&ht, 30));
    printf("Value associated with key 11: %d\n", get(&ht, 11));
    printf("Value associated with key 12: %d\n", get(&ht, 12));

    // Testing non-existent key
    printf("Value associated with key 40: %d\n", get(&ht, 40)); // Key not found

    return 0;
}