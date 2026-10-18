#include <stdio.h>

void oriArr(char arr[], int size)
{
    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("  %c  ", arr[i]);
    }
    printf("\n");
}

void sortArr(char arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArr(char arr[], int size)
{
    printf("  Sorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("  %c  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    char arr[] = {'d', 'c', 'q', 'g', 't', 'n', 'z'};
    int size = sizeof(arr) / sizeof(arr[0]);

    oriArr(arr, size);
    sortArr(arr, size);
    printArr(arr, size);

    return 0;
}