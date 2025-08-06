#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int val) {
    if (top < SIZE - 1) {
        stack[++top] = val;
        printf("Pushed: %d\n", val);
    } else {
        printf("Stack Full\n");
    }
}

void pop() {
    if (top >= 0) {
        printf("Popped: %d\n", stack[top--]);
    } else {
        printf("Stack Empty\n");
    }
}

void peek() {
    if (top >= 0) {
        printf("Top: %d\n", stack[top]);
    } else {
        printf("Stack Empty\n");
    }
}

int main() {
    push(10);
    push(20);
    peek();
    pop();
    peek();
    pop();
    pop(); // Will show stack empty
    return 0;
}
