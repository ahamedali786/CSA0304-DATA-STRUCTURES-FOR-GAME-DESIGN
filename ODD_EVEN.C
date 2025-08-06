#include <stdio.h>

int main() {
    int n, i, number;

    printf("Enter how many numbers you want to check: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &number);

        if(number % 2 == 0)
            printf("Number %d is Even\n", number);
        else
            printf("Number %d is Odd\n", number);
    }

    return 0;
}
