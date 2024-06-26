#include <stdio.h>

// int linearSearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int binarySearch(int arr[], int size, int element)
// {
//     int low, mid, high;
//     low = 0;
//     high = size - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         if (arr[mid] < element)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

int bin(int arr[], int size, int targer)
{
    int high, low, mid;

    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == targer)
        {
            return mid;
        }
        if (arr[mid] > targer)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
        return -1;
}
int main()
{
    // unsorted for linear search
    // int arr[]={1,2,3,4,2,2,42,24,2342,2};
    // int size = sizeof(arr)/sizeof(int);

    // sorted for binary
    int arr[] = {1, 2, 3, 4, 2, 2, 42, 24, 2342, 2};
    int size = sizeof(arr) / sizeof(int);
    int element = 2342;
    int find = bin(arr, size, element);
    printf("Binary search: The element %d was found at index %d ", element, find);
    // printf("Linear search: THe element %d was  found at index  %d ",element,searchIndex );

    return 0;
}
