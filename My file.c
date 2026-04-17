#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r, choice;
    char cont;

    do {
        printf("Enter value of n: ");
        scanf("%d", &n);
        printf("Enter value of r: ");
        scanf("%d", &r);

        printf("Choose operation:\n");
        printf("1. Permutation (nPr)\n");
        printf("2. Combination (nCr)\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            printf("Permutation (nPr) = %lld\n", permutation(n, r));
        else if (choice == 2)
            printf("Combination (nCr) = %lld\n", combination(n, r));
        else
            printf("Invalid choice!\n");
            
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &cont);
    } while (cont == 'Y' || cont == 'y');

    printf("Program ended.\n");
    return 0;
}
