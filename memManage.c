#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int *ptr2;
    int n, i;

    // Step 1: Using malloc() to allocate memory
    printf("Enter the number of integers you want to store (using malloc): ");
    scanf("%d", &n);

    // Allocating memory for 'n' integers using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Checking if malloc() returned NULL (memory allocation failed)
    if (ptr == NULL) {
        printf("Memory allocation using malloc failed!\n");
        return 1;
    }

    // Step 2: Using calloc() to allocate and initialize memory to zero
    printf("Enter the number of integers you want to store (using calloc): ");
    scanf("%d", &n);

    // Allocating memory using calloc, which also initializes to zero
    ptr2 = (int *)calloc(n, sizeof(int));

    // Checking if calloc() returned NULL
    if (ptr2 == NULL) {
        printf("Memory allocation using calloc failed!\n");
        free(ptr);  // Free previously allocated memory
        return 1;
    }

    // Step 3: Using realloc() to resize the memory allocated by malloc/calloc
    printf("Enter a new size for the array (resize using realloc): ");
    int new_size;
    scanf("%d", &new_size);

    // Resizing memory using realloc (increase or decrease the size)
    ptr = (int *)realloc(ptr, new_size * sizeof(int));

    // Checking if realloc() returned NULL
    if (ptr == NULL) {
        printf("Memory reallocation using realloc failed!\n");
        free(ptr2);  // Free memory allocated by calloc
        return 1;
    }

    // Step 4: Input values into the arrays (malloc, calloc, and realloc)
    printf("\nEnter %d integers for malloc memory:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nEnter %d integers for calloc memory:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr2[i]);
    }

    // Step 5: Output the values stored in memory
    printf("\nValues stored in malloc memory:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\nValues stored in calloc memory (initialized to zero first):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }

    // Step 6: Freeing the dynamically allocated memory
    free(ptr);
    free(ptr2);

    return 0;
}
