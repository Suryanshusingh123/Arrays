#include <iostream>
using namespace std;

int partion(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int c;
    do
    {

        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            c = a[i];
            a[i] = a[j];
            a[j] = c;
        }
    } while (i < j);

    c = a[low];
    a[low] = a[j];
    a[j] = c;
    return j;
}

void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int partionindex = partion(a, low, high);
        quicksort(a, low, partionindex - 1);
        quicksort(a, partionindex + 1, high);
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
    quicksort(a, 0, size - 1);
    printarray(a, size);
    return 0;
}