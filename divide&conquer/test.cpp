#include <bits/stdc++.h>
using namespace std;
//merge sort
void mergeArray(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copy left array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }
    // copy right array
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    // copy logic for left remaining array
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    // copy logic for right remaining array
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}

void sortArray(int *n, int s, int e)
{
    // base case
    // s==e-> single  element
    // s>e -> invalid array
    if (s >= e)
    {
        return;
    }
    
    int mid = (s + e) / 2;
    // left part sort kardo recursion bhaiya
    sortArray(n, s, mid);
    // right part sort kardo recursion bhaiya
    sortArray(n, mid + 1, e);

    mergeArray(n, s, e);
}

int main()
{
    int arr[] = {1, 6, 3, 7, 45, 23, 4, 34};
    int len = 8;
    int start = 0;
    int end = len - 1;
    sortArray(arr, start, end);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}