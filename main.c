#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int sizeOfArray)
{
    int i, j, min;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < sizeOfArray-1; i++)
    {
        // Find the minimum element in unsorted array
        min = i;
        for (j = i+1; j < sizeOfArray; j++)
          if (arr[j] < arr[min])
            min = j;

        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// Function prints the elements of the array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {647, 31, 1, 6812, -11};
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    printf("\nUnsorted array: ");
    printArray(arr, sizeOfArray);
    selectionSort(arr, sizeOfArray);
    printf("\nSorted array: ");
    printArray(arr, sizeOfArray);
    return 0;
}
