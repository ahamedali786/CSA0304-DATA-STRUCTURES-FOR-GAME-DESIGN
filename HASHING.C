#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

void insert(int key) {
    int index = key % SIZE;
    while (hashTable[index] != -1)
        index = (index + 1) % SIZE;
    hashTable[index] = key;
}

void display() {
    for (int i = 0; i < SIZE; i++)
        printf("%d -> %d\n", i, hashTable[i]);
}

int main() {
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    insert(12);
    insert(22);
    insert(32);
    display();
    return 0;
}

OUTPUT:
0 -> -1
1 -> -1
2 -> 12
3 -> 22
4 -> 32
5 -> -1
6 -> -1
7 -> -1
8 -> -1
9 -> -1
