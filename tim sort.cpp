#include <bits/stdc++.h>
using namespace std;
const int SIZE = 16;

// Perform insertion sort
void insertion_sort(int arr[], int start, int end)
{
    for (int i = start + 1; i <= end; i++)
    {
        int temp = arr[i], j = i - 1;

        /* Shift elements of arr[0..i-1], that are
        greater than temp, to one position ahead
        of their current position */
        while (j >= start && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Merge operation to merge two sorted segments
void merge(int arr[], int start, int mid, int end)
{
    int n = mid - start + 1, m = end - mid;
    int arr1[n], arr2[m];

    for (int i = 0; i < n; i++)
        arr1[i] = arr[start + i];
    for (int i = 0; i < m; i++)
        arr2[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = start;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
}

// Sort the array using Tim Sort
void tim_sort(int arr[], int n)
{
    // Sort individual subarrays of size SIZE
    for (int i = 0; i < n; i += SIZE)
        insertion_sort(arr, i, min((i + 15), (n - 1)));

    // Merge all the small segments formed
    for (int size = SIZE; size < n; size = 2 * size)
    {
        // From the start of the array, we are going to merge two segments each of size SIZE.
        for (int left = 0; left < n; left += 2 * size)
        {
            // Find  mid point
            int mid = left + size - 1;
            int right = min((left + 2 * size - 1), (n - 1));
            // Merge the two subarrays
            merge(arr, left, mid, right);
        }
    }
}

int main()
{
    int n;
    int arr[]={234,12,1,67,93,247,0,6363,9837};
    n=sizeof(arr)/sizeof(arr[0]);

    tim_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);
    cout << "\n";

    return 0;
}
