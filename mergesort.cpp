#include <iostream>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, b[100], k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++, k++;
        }
        else
        {
            b[k] = a[j];
            j++, k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++,i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++,j++;
    }

    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void mergesort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (high + low) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    int a[] = {2, 6, 5, 9, 7, 34, 67};
    int size = 7;
    printarray(a, size);
    cout << endl;
    mergesort(a, 0, 6);
    printarray(a, size);
    return 0;
}