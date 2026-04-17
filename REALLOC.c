#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, n1, n2;
    printf("enter no. of elements:");
    scanf("%d", &n1);
    ptr = (int*) calloc(n1, sizeof(int));
    for(int i = 0; i < n1; i++)
    {
        printf("Enter value of %d element:", i+1);
        scanf("%d", ptr+i);
    }
    printf("Initial array:\n");
    for(int i = 0; i < n1; i++)
    {
        printf("%d element:%d\n", i+1, ptr[i]);
    }
    printf("Enter number of extra elements to add:");
    scanf("%d", &n2);
    ptr = (int*) realloc(ptr, (n1+n2) * sizeof(int));
    for(int i = n1; i < (n1+n2); i++){
        printf("Enter value of %d element:", i+1);
        scanf("%d", ptr+i);
    }
    printf("Final array:\n");
    for(int i = 0; i < (n1+n2); i++)
        printf("%d\n", ptr[i]);

}
