#include <stdio.h>

// Function to perform insertion sort
void selectionSort(int *A, int n)
{
    for(int i = 0; i<n-1;i++){
        int indexOfMin=i;
        for (int j = i+1 ; j < n; i++)
        {
          if(A[j]<A[indexOfMin]){
            indexOfMin = j;
          }
        }
        
    int temp = A[i];
    A[i] = A[indexOfMin];
    A[indexOfMin] = temp;

    }
}

// Function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
