#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    // step 1: choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step 2: find right positon for pivot element and place it there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }

    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // step 3:left mai chote and right mai bade
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }

        // 2 case ho sakte hai
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition logic
    int p = partition(arr, s, e);

    // recursive calls
    // pivot element ->left
    quickSort(arr, s, p - 1);

    // right
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 30};
    int n = 7;
    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}