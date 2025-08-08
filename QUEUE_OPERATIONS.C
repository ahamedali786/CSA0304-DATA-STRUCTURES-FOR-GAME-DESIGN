#include <stdio.h>
#define SIZE 5

int q[SIZE], front = -1, rear = -1;

void enqueue(int val) {
    if(rear == SIZE - 1)
        printf("Full\n");
    else {
        if(front == -1) front = 0;
        q[++rear] = val;
    }
}

void dequeue() {
    if(front == -1 || front > rear)
        printf("Empty\n");
    else
        front++;
}

void display() {
    if(front == -1 || front > rear)
        printf("Empty\n");
    else {
        for(int i = front; i <= rear; i++)
            printf("%d ", q[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    display();
    dequeue();
    display();
    return 0;
}

OUTPUT:
10 20 
20
