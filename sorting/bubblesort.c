
#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // for number of passes
    {
        for (int j = 0; j < n - 1 - i; j++) // for comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("\n");
}
int main()
{
    int A[] = {12, 55, 22, 11, 55, 33};
    int n = 6;
    printArray(A, n);
    bubbleSort(A, n);
    printArray(A, n);

    return 0;
}