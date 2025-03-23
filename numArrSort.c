#include <stdio.h>

void oriArr(int arr[], int size)
{
    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", arr[i]);
    }
    printf("\n");
}

void sortArr(int arr[], int size)
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

void printArr(int arr[], int size)
{
    printf("  Sorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {9, 0, 4, 5, 6, 3, 2, 7, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    oriArr(arr, size);
    sortArr(arr, size);
    printArr(arr, size);

    return 0;
}