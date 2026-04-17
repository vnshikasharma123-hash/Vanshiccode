#include <stdio.h>
#include <stdlib.h>

int menu();
void input(int data[], int *n);
void display(int data[], int n);
int sum_array(int data[], int n);
float avg_array(int data[], int n);
int min_array(int data[], int n);
int max_array(int data[], int n);

// Menu function
int menu() {
    int choice;
    printf("\n--- Array Operations Menu ---\n");
    printf("1. Sum of array\n");
    printf("2. Average of array\n");
    printf("3. Minimum element\n");
    printf("4. Maximum element\n");
    printf("5. Display array\n");
    printf("6. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    return choice;
}

// Input function
void input(int data[], int *n) {
    printf("Enter number of elements: ");
    scanf("%d", n);
    printf("Enter %d elements:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &data[i]);
    }
}

// Display function
void display(int data[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

// Sum function
int sum_array(int data[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += data[i];
    return sum;
}

// Average function
float avg_array(int data[], int n) {
    return (float)sum_array(data, n) / n;
}

// Min function
int min_array(int data[], int n) {
    int min = data[0];
    for (int i = 1; i < n; i++)
        if (data[i] < min)
            min = data[i];
    return min;
}

// Max function
int max_array(int data[], int n) {
    int max = data[0];
    for (int i = 1; i < n; i++)
        if (data[i] > max)
            max = data[i];
    return max;
}

int main() {
    int data[100], num_element, ch;

    // Input array once at the beginning
    input(data, &num_element);

    while (1) {
        ch = menu();
        switch (ch) {
            case 1:
                display(data, num_element);
                printf("Sum = %d\n", sum_array(data, num_element));
                break;

            case 2:
                display(data, num_element);
                printf("Average = %.2f\n", avg_array(data, num_element));
