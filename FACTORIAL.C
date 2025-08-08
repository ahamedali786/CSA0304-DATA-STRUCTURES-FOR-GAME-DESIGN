#include <stdio.h>

int main() {
    int n, fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %d\n", fact);
    return 0;
}

OUTPUT:
Enter a number: 6
Factorial of 6 is 720.
