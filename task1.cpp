#include <iostream>

using namespace std;

/*сортировка вставкой*/
 void sort(int* arr, int count)
{
    int el = 0;
    int key = 0;
    for (size_t i = 0; i < count; i++)
    {
        el = i - 1;
        key = arr[i];
        while (arr[el] > key and el >= 0)
        {
            arr[el + 1] = arr[el];
            el -= 1;
        }
        arr[el + 1] = key;
    }
}

/*qsort сортровка*/
void qSortForTheFirst(int* arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[(i + j) / 2];
    int temp;
    int count = 0;

    int x[] = { 0 };
    for (int m = i; m < j; m++) {
        if (count >= 10)
        {
            break;
        }
        arr[m];
        ++count;
    }

    if (count < 10)
    {
        sort(x, count);
        for (size_t k = 0; k < count; k++)
        {
            arr[k]=x[k];
        }
    }
    else
    {
        while (i <= j)
        {
            while (arr[i] < pivot)
                i++;
            while (arr[j] > pivot)
                j--;
            if (i <= j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
    }
    if (j > low)
    {
        qSortForTheFirst(arr, low, j);
    }
    if (i < high)
    {
        qSortForTheFirst(arr, i, high);
    }
}

int arr[16] = { 1, 4, 5, 2, 5, 3, 11, 3, 5, 10, 11, 4, 15, 13, 11, 9 };

int main()
{
    /*First task*/
    int len = sizeof(arr) / sizeof(arr[0]);
    qSortForTheFirst(arr, 0, len);
    for (size_t i = 1; i < len; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}